/*
  ==============================================================================

   This file is part of the JUCE examples.
   Copyright (c) 2017 - ROLI Ltd.

   The code included in this file is provided under the terms of the ISC license
   http://www.isc.org/downloads/software-support-policy/isc-license. Permission
   To use, copy, modify, and/or distribute this software for any purpose with or
   without fee is hereby granted provided that the above copyright notice and
   this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES,
   WHETHER EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR
   PURPOSE, ARE DISCLAIMED.

  ==============================================================================
*/

#pragma once

#include <BlocksHeader.h>

// Monitors a PhysicalTopologySource for changes to the connected BLOCKS and
// prints some information about the BLOCKS that are available.
class BlockFinder : private juce::TopologySource::Listener
{
public:
    // Register as a listener to the PhysicalTopologySource, so that we receive
    // callbacks in topologyChanged().
    BlockFinder();

private:
    // Called by the PhysicalTopologySource when the BLOCKS topology changes.
    void topologyChanged() override;

    // The PhysicalTopologySource member variable which reports BLOCKS changes.
    juce::PhysicalTopologySource pts;
};
