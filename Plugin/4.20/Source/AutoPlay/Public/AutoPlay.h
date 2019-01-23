// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Core/Public/Modules/ModuleInterface.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAutoPlay, Log, All);

class FAutoPlayModule : public IModuleInterface{
    
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    
    static inline FAutoPlayModule& Get()
    {
        return FModuleManager::LoadModuleChecked< FAutoPlayModule >("AutoPlay");
    }
    
    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("AutoPlay");
    }
};
