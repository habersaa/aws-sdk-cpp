﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/TracingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace TracingModeMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int PassThrough_HASH = HashingUtils::HashString("PassThrough");


        TracingMode GetTracingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return TracingMode::Active;
          }
          else if (hashCode == PassThrough_HASH)
          {
            return TracingMode::PassThrough;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TracingMode>(hashCode);
          }

          return TracingMode::NOT_SET;
        }

        Aws::String GetNameForTracingMode(TracingMode enumValue)
        {
          switch(enumValue)
          {
          case TracingMode::Active:
            return "Active";
          case TracingMode::PassThrough:
            return "PassThrough";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TracingModeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
