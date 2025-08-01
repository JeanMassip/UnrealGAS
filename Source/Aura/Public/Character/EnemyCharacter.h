

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "Interaction/HighlightInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyCharacter : public ACharacterBase, public IHighlightInterface
{
	GENERATED_BODY()
public:
	AEnemyCharacter();
	
	//- Begin HighlightInterface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//- End HighlightInterface
	
protected:
	virtual void BeginPlay() override;
};
