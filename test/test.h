// Copyright 2017-2019 Elias Kosunen
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This file is a part of scnlib:
//     https://github.com/eliaskosunen/scnlib

#include <doctest.h>
#include <scn/scn.h>

#define DOCTEST_VALUE_PARAMETERIZED_DATA(data, data_array)                     \
    SCN_CLANG_PUSH SCN_CLANG_IGNORE("-Wexit-time-destructors") {}              \
    static std::vector<std::string> _doctest_subcases = [&data_array]() {      \
        std::vector<std::string> out;                                          \
        while (out.size() != data_array.size())                                \
            out.push_back(std::string(#data_array "[") +                       \
                          std::to_string(out.size() + 1) + "]");               \
        return out;                                                            \
    }();                                                                       \
    size_t _doctest_subcase_idx = 0;                                           \
    std::for_each(                                                             \
        data_array.begin(), data_array.end(), [&](const decltype(data)& in) {  \
            DOCTEST_SUBCASE(_doctest_subcases[_doctest_subcase_idx++].c_str()) \
            {                                                                  \
                data = in;                                                     \
            }                                                                  \
        }) SCN_CLANG_POP