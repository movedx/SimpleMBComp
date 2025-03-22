#pragma once

#include <JuceHeader.h>


struct PowerButton : juce::ToggleButton {};

struct AnalyzerButton : juce::ToggleButton
{
    void resized();

    juce::Path randomPath;
};