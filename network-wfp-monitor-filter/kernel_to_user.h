// Copyright (c) 2020 Alexandr Shevchenko. (alexshev@live.com) 
// All rights reserved.
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



#define NETWFPMON_NT_DEVICE_NAME          L"\\Device\\netwfpmon"
#define NETWFPMON_DOS_DEVICE_NAME         L"\\??\\netwfpmon"



typedef struct _NET_IO_REQUEST {

	int    test;


} NET_IO_REQUEST, * PNET_IO_REQUEST;



#define IOCTL_NET_FILTER_TEST	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x100, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NET_FILTER_START	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x110, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_NET_FILTER_STOP	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x111, METHOD_BUFFERED, FILE_ANY_ACCESS)