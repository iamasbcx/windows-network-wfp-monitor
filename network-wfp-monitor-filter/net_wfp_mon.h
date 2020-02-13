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


extern "C"
{
#pragma warning(push)
#pragma warning(disable: 4201)		// NAMELESS_STRUCT_UNION
#pragma warning(disable: 4324)		// STRUCTURE_PADDED




#include <ntifs.h>                  
#include <ntddk.h>                  
//#include <wdf.h>                  
#include <ndis.h>                   
#include <fwpmk.h>                  
#include <fwpsk.h>                  
#include <netioddk.h>               
#include <ntintsafe.h>              
#include <ntstrsafe.h>              
#include <stdlib.h>                 

#include <guiddef.h>
#include <initguid.h>
#include "ipsectypes.h"

#include "kernel_to_user.h"




#pragma warning(pop)


#define NET_CALLOUT_NAME			L"Callout"
#define NET_CALLOUT_DESCRIPTION		L"A callout used for demonstration purposes"

#define NET_SUBLAYER_NAME			L"Sublayer"
#define NET_SUBLAYER_DESCRIPTION	L"A sublayer used to hold filters in an callout driver"

#define NET_FILTER_NAME				L"Filter"
#define NET_FILTER_DESCRIPTION		L"A filter that uses the callout"



// {0AFB9944-C9B7-43D6-B7E5-6B61A4777A27}
DEFINE_GUID(NETWFPMON_CALLOUT_GUID,
	0xafb9944, 0xc9b7, 0x43d6, 0xb7, 0xe5, 0x6b, 0x61, 0xa4, 0x77, 0x7a, 0x27);


// {77A958EA-7585-4755-9E6D-1C98DE4F1FF2}
DEFINE_GUID(NETWFPMON_SUBLAYER_GUID,
	0x77a958ea, 0x7585, 0x4755, 0x9e, 0x6d, 0x1c, 0x98, 0xde, 0x4f, 0x1f, 0xf2);


_Success_(return == STATUS_SUCCESS)
NTSTATUS 
net_delete_interface();


NTSTATUS
net_wfp_register_callout(
	_In_ DEVICE_OBJECT* wdm_device,
	_In_ const GUID* calloutKey
	);


NTSTATUS
net_wfp_unregister_callout();

NTSTATUS net_wfp_register_sublayer();

NTSTATUS net_wfp_register_filter();

NTSTATUS
net_wfp_unregister_filter();


}

#include "debug.h"
