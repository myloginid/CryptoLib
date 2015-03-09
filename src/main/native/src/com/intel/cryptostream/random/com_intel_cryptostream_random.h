/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef COM_INTEL_CRYPTOSTREAM_RANDOM_H
#define COM_INTEL_CRYPTOSTREAM_RANDOM_H

#include "com_intel_cryptostream.h"

#ifdef UNIX
#include <dlfcn.h>
#include "config.h"
#endif

#ifdef WINDOWS
#include "winutils.h"
#endif

#define UNUSED(x) ((void)(x))

#include <openssl/crypto.h>
#include <openssl/engine.h>
#include <openssl/rand.h>
#include <openssl/err.h>

#endif //COM_INTEL_CRYPTOSTREAM_RANDOM_H