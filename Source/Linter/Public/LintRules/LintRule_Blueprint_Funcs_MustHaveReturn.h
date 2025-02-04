// Copyright 2019-2020 Gamemakin LLC. All Rights Reserved.
#pragma once


#include "LintRule.h"
#include "LintRule_Blueprint_Base.h"
#include "LintRule_Blueprint_Funcs_MustHaveReturn.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract)
class LINTER_API ULintRule_Blueprint_Funcs_MustHaveReturn : public ULintRule_Blueprint_Base
{
	GENERATED_BODY()

public:
	ULintRule_Blueprint_Funcs_MustHaveReturn(const FObjectInitializer& ObjectInitializer);

protected:
	virtual bool PassesRule_Internal_Implementation(UObject* ObjectToLint, const ULintRuleSet* ParentRuleSet, TArray<FLintRuleViolation>& OutRuleViolations) const override;
};