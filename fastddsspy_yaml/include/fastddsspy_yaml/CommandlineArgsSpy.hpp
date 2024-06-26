// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <cpp_utils/types/Fuzzy.hpp>

#include <ddspipe_core/configuration/CommandlineArgs.hpp>
#include <ddspipe_core/types/dds/DomainId.hpp>

#include <fastddsspy_yaml/library/library_dll.h>

namespace eprosima {
namespace spy {
namespace yaml {

/*
 * Struct to parse the executable arguments
 */
struct FASTDDSSPY_YAML_DllAPI CommandlineArgsSpy : public ddspipe::core::CommandlineArgs
{

    /////////////////////////
    // CONSTRUCTORS
    /////////////////////////

    CommandlineArgsSpy();

    /////////////////////////
    // METHODS
    /////////////////////////

    /**
     * @brief \c is_valid method.
     */
    bool is_valid(
            utils::Formatter& error_msg) const noexcept override;

    /////////////////////////
    // VARIABLES
    /////////////////////////

    // One shot command
    std::vector<std::string> one_shot_command;

    // Domain
    utils::Fuzzy<ddspipe::core::types::DomainId> domain{0, utils::FuzzyLevelValues::fuzzy_level_default};
};

} /* namespace yaml */
} /* namespace spy */
} /* namespace eprosima */
