/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/crt/StringUtils.h>

#include <aws/common/hash_table.h>

namespace Aws
{
    namespace Crt
    {
        size_t HashString(const char* str) noexcept
        {
            return (size_t)aws_hash_c_string(str);
        }
    }
}