/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef _MB_FLOATCHECK_H_
#define _MB_FLOATCHECK_H_

#include <stdint.h>
#include "os/mynewt.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Checks if a double is equal to the specified value, with a +/- margin of
 * 'epsilon'.
 *
 * @param a         The value to check
 * @param b         The value to compare against
 * @param b         The +/- margin for equality
 * @msg             The function requesting the comparison (for log purposes)
 *
 * @return  True if value is greater than or equal to 'b', otherwise false.
 */
bool d_is_equal(double a, double b, double epsilon, char *msg);

/**
 * Checks if a double is equal to or greater than the specified value.
 *
 * @param a         The value to check
 * @param b         The value to compare against
 * @msg             The function requesting the comparison (for log purposes)
 *
 * @return  True if value is greater than or equal to 'b', otherwise false.
 */
bool d_is_at_least(double a, double b, char *msg);

/**
 * Checks if a double is less than the specified value.
 *
 * @param a         The value to check
 * @param b         The value to compare against
 * @msg             The function requesting the comparison (for log purposes)
 *
 * @return  True if value is less than 'b', otherwise false.
 */
bool d_is_less_than(double a, double b, char *msg);

/**
 * Checks if a double is greater than the specified value.
 *
 * @param a         The value to check
 * @param b         The value to compare against
 * @msg             The function requesting the comparison (for log purposes)
 *
 * @return  True if value is greater than 'b', otherwise false.
 */
bool d_is_greater_than(double a, double b, char *msg);

/**
 * Checks if a double is within the range of 'upper' and 'lower'.
 *
 * @param a         The value to check
 * @param upper     The upper value to compare against (inclusive)
 * @param lower     The lower value to compare against (inclusive)
 * @msg             The function requesting the comparison (for log purposes)
 *
 * @return  True if value is less than 'b', otherwise false.
 */
bool d_is_within(double a, double upper, double lower, char *msg);

#ifdef __cplusplus
}
#endif

#endif /* _MB_FLOATCHECK_H_ */
