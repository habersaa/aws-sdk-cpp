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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RuleState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>Contains information about a rule in Amazon CloudWatch
   * Events.</simpara> </zonbook> <xhtml> <p>Contains information about a rule in
   * Amazon CloudWatch Events.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API Rule
  {
  public:
    Rule();
    Rule(const Aws::Utils::Json::JsonValue& jsonValue);
    Rule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline Rule& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline Rule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline Rule& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline Rule& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline Rule& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The event pattern of the rule.</simpara> </zonbook> <xhtml>
     * <p>The event pattern of the rule.</p> </xhtml>
     */
    inline Rule& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The state of the rule.</simpara> </zonbook> <xhtml> <p>The
     * state of the rule.</p> </xhtml>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <zonbook> <simpara>The state of the rule.</simpara> </zonbook> <xhtml> <p>The
     * state of the rule.</p> </xhtml>
     */
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <zonbook> <simpara>The state of the rule.</simpara> </zonbook> <xhtml> <p>The
     * state of the rule.</p> </xhtml>
     */
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <zonbook> <simpara>The state of the rule.</simpara> </zonbook> <xhtml> <p>The
     * state of the rule.</p> </xhtml>
     */
    inline Rule& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <zonbook> <simpara>The state of the rule.</simpara> </zonbook> <xhtml> <p>The
     * state of the rule.</p> </xhtml>
     */
    inline Rule& WithState(RuleState&& value) { SetState(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline Rule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline Rule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The description of the rule.</simpara> </zonbook> <xhtml>
     * <p>The description of the rule.</p> </xhtml>
     */
    inline Rule& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline Rule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline Rule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline Rule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline Rule& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline Rule& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the role that is used for
     * target invocation.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name
     * (ARN) of the role that is used for target invocation.</p> </xhtml>
     */
    inline Rule& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet;
    RuleState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
