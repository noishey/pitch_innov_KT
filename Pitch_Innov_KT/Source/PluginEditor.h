/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pitch_Innov_KTAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Pitch_Innov_KTAudioProcessorEditor (Pitch_Innov_KTAudioProcessor&);
    ~Pitch_Innov_KTAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pitch_Innov_KTAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pitch_Innov_KTAudioProcessorEditor)
};
