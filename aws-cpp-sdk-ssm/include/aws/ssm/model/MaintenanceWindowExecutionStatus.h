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
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class MaintenanceWindowExecutionStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    TIMED_OUT,
    CANCELLING,
    CANCELLED,
    SKIPPED_OVERLAPPING
  };

namespace MaintenanceWindowExecutionStatusMapper
{
AWS_SSM_API MaintenanceWindowExecutionStatus GetMaintenanceWindowExecutionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForMaintenanceWindowExecutionStatus(MaintenanceWindowExecutionStatus value);
} // namespace MaintenanceWindowExecutionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
