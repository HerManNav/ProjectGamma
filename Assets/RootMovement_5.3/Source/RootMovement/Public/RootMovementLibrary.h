// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/RootMotionSource.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RootMovementLibrary.generated.h"

/**
 *
 */
UCLASS()
class ROOTMOVEMENT_API URootMovementLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Apply root motion movement to passed Character Movement Component
     */
    UFUNCTION(BlueprintCallable, DisplayName = "Apply Root Motion Constant Force", Category = "RootMovement", meta = (WorldContext = "WorldContext", Keywords = "RootMovement RootMotion Root Motion Movement"))
    static void ApplyRootMotionConstantForce(
        const UObject* WorldContext,
        UCharacterMovementComponent* CharacterMovement,
        FVector WorldDirection,
        float Strength,
        float Duration,
        bool bIsAdditive,
        UCurveFloat* StrengthOverTime,
        ERootMotionFinishVelocityMode VelocityOnFinishMode,
        FVector SetVelocityOnFinish,
        float ClampVelocityOnFinish,
        bool bEnableGravity
    )
    {
        // Create a root motion source
        TSharedPtr<FRootMotionSource_ConstantForce> ConstantForce = MakeShared<FRootMotionSource_ConstantForce>();
        ConstantForce->InstanceName = FName("ConstantForce");
        ConstantForce->AccumulateMode = bIsAdditive ? ERootMotionAccumulateMode::Additive : ERootMotionAccumulateMode::Override;
        ConstantForce->Priority = 5;
        ConstantForce->Force = WorldDirection * Strength;
        ConstantForce->Duration = Duration;
        ConstantForce->StrengthOverTime = StrengthOverTime;
        ConstantForce->FinishVelocityParams.Mode = VelocityOnFinishMode;
        ConstantForce->FinishVelocityParams.SetVelocity = SetVelocityOnFinish;
        ConstantForce->FinishVelocityParams.ClampVelocity = ClampVelocityOnFinish;

        if (bEnableGravity)
        {
            ConstantForce->Settings.SetFlag(ERootMotionSourceSettingsFlags::IgnoreZAccumulate);
        }

        if (CharacterMovement) {
            // Apply root motion source to the character's movement component
            CharacterMovement->ApplyRootMotionSource(ConstantForce);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent not provided for ApplyRootMotionConstantForce"));
        }

        return;
    }
};