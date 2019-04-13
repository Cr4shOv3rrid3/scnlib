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

#if defined(SCN_HEADER_ONLY) && SCN_HEADER_ONLY
#define SCN_RANGES_VSCAN_CPP
#endif

#include <scn/ranges.h>

namespace scn {
    namespace ranges {
        SCN_BEGIN_NAMESPACE

        result<int> vscan(erased_stream_context& ctx)
        {
            return visit(ctx);
        }
        result<int> vscan(werased_stream_context& ctx)
        {
            return visit(ctx);
        }
        result<int> vscan(erased_sized_stream_context& ctx)
        {
            return visit(ctx);
        }
        result<int> vscan(werased_sized_stream_context& ctx)
        {
            return visit(ctx);
        }

        SCN_END_NAMESPACE
    }  // namespace ranges
}  // namespace scn