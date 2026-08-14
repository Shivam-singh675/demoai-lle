/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 30)
    Flow details:
    Build details: 08/05/2026 09:47:43
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void Flow_1()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("index");
    ns_web_url("index",
        "URL=https://www.directv.com/",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:navigate",
        INLINE_URLS,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Medium.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Regular.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Bold.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Light.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/fonts/Roboto-Bold.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/fonts/Roboto-Regular.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/fonts/Roboto-Medium.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/arrow-right_lt-bg.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/logos/dtv-gnav/GNAV_directv_90x120-1.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/54372.04f49da66a5d7af3.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/81193.303f95fd59b4714d.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/8835.2fc26228edcfbd3f.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/36580.78b3fdae3a3089b0.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/51341-e9c1e35ea3ef2163.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/25741-24cd7e9d99f854cb.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/29566-aa400e075acd4a65.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/96101.57ef2bdceaebbde1.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/92572.ae324710a1fa564b.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/94529.bcbd19ac84838f95.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/36328.f4543f7655ca7268.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/85407.c86efda13ee905cb.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/25573.45079cd4797797f9.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/66517.ee0da8da08d6a75c.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/11717.45a71851eabee088.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/23755.cfd58a400a110d78.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/5875.926a6de553898daa.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/8703.81e738dc79e25d26.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/24662.97848ec8d819845f.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/37478.24c4ebb379d871ff.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/14284.6decc54a98d8c6be.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/20829.1bab078ed5aaab19.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/22495.fc2ece96f769d756.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/83789-815496418f487c18.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/webpack-c4b38478935d4767.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/framework-c8eb71e3ef9bcca2.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/main-3f9a19a2ad77acb5.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/pages/_app-16eab527650518dc.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/mui-pages-dir-browser-4ee22f429df1eb69.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/fusion-icons-pages-dir-browser-4f18c59c8a6db793.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/60d4670e-354760c3a3b68f1e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/directv-services-shared-d85e69d07fbb738c.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/91035-309ba5eaf6045e82.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/66408-0a82cff30d8797dc.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/11948-e0d623eb9a59eee4.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/98772-47eb7295e198f34c.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/91168-ad237561ee3b9878.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/53330-b8acc3ebc2eba8bc.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/69772-1f99bbf38f46c350.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/13238-a94fff4d16807921.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/85436-8bee59799647ef30.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/74757-622d3378f435c175.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/20972-3d3f53a15b44ec50.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/71769-ecc20748ca6d727c.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/14129-f2958ad91c83009a.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/87197-3f46d6bc9f3f8817.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/73562-83635d4cf550bd5d.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/79502-d614364f874853db.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/94527-f5f1721d220c3cca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/80450-8ea167d1c40427ed.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/28697-20f4849d9836006f.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/22801-baf391d62654ca2d.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/92306-f5a637ca2a18d29e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/74075-e36b2d58b7a21fb5.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/pages/index-c29ccc6c76cb9f84.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/2.97.5/_buildManifest.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/2.97.5/_ssgManifest.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/akam/13/b9125f4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/arrow-down_lt-bg.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/search-icon-jet_lt-bg_32px.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/phone.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/1py5wceaka/web/8176850-MySports-Front-DSK.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/fv9zz0fgr8/svg/SVOD-app-logo_ESPN.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/ckvm3edgzc/svg/GrowCard-Logos-DSK-MySports-2x-v2-2-2.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/gejgcbwxks/web/7819054-MySports-BackIP.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/upn6vjaj8y/web/7819054-MyEnt-Front-DSK.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/xbbeuvf8s6/svg/SVOD-app-logo_AMC-plus.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/daxmdvi6n7/svg/SVOD-app-logo_HBO-Max.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/hhnhlny9ca/svg/SVOD-app-logo_Disney-plus.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/fh8yeao1f8/svg/SVOD-app-logo_Hulu.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/rpnls4cczf/svg/GrowCard-Logos-DSK-MyEnt-2x-v2.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/nlf01kp0ce/web/7819054-MyEnt-BackIP.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/i2mwwn3ged/web/7819054-MyNews-Front-DSK.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://directv.widen.net/content/vbwy1skny9/svg/7819054-GrowCard-Logos-DSK-MyNews-2x-v2-2.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/qvcl6r9dm2/svg/6922201-GrowCrad-Logos-DSK-MyNews-2x.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/jdbq9upsde/web/7819054-MyNews-BackIP.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/pnc2ton8ls/web/7819054-MiEsp-Front-DSK.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/rwzrefir2o/svg/SVOD-app-logo_ViX-Premium.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/yr9fixgllf/svg/GrowCard-Logos-DSK-MiEsp-2x-v2.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/drhgjsmav9/web/7819054-MiEsp-BackIP.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/xhahvyp8sj/web/7819054-MyKids-Front-DSK.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/0uaduaxn6m/svg/GrowCard-Logos-DSK-MyKids-2x.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/qfevlxbfjj/web/7819054-MyKids-BackIP.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/t2ozc6nzif/web/pkgTV.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/383jbgbkax/mp4/7996450_Saquon_MQ_16x9.mp4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:video","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Range:bytes=0-","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("tnJV4B");
    ns_web_url("tnJV4B",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_main_1_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.googletagmanager.com/gtm.js?id=GTM-PJR2VDH&gtm_auth=cvrSnbSB4i9EeyExvYzmrg&gtm_preview=env-1&gtm_cookies_win=x","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/4602-faf9d185d8973600.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/49400-0ba31fbeb92d04e2.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/32121-27736ec094a856b2.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/90343-e0a8bfa72aa888fa.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/62237-293e00531abb740e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/4767.e1a52fc28df6221a.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/76584.b04dd6cb01360824.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("tnJV4B", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("getOffers");
    ns_web_url("getOffers",
        "URL=https://www.directv.com/shop/api/getOffers",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=idp-source:DTVS",
        "HEADER=appName:UF",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_getOffers_main_2_0.json",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.directv.com/uf/_next/static/chunks/76553.1621e9c86630e3dc.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:application/json",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=G-LEXYQWQ1NF&cx=c&gtm=4e6831","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/gtm/quantummetrics/dtvquantummetrics.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.optimizely.com/js/5137227521458176.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.zineone.com/cloud/latest/z1m.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://celebrus.directv.com/CelebrusInsert.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("getOffers", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("collect");
    ns_web_url("collect",
        "URL=https://www.google.com/ccm/collect?rcb=19&frm=0&apvc=1&ae=g&auid=1143583505.1785923160&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2087006851.1785923160&navt=n&npa=0&ep.ads_data_redaction=0&gtm=45He6831v848825936za200zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938466~115938469~117227716~118131808~118897920~118897930~119896803&tft=1785923159748&tfd=2836&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("collect_2");
    ns_web_url("collect_2",
        "URL=https://ad.doubleclick.net/ccm/s/collect?auid=1143583505.1785923160&gtm=45He6831v848825936za200zd848825936xea&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.directv.com/content/dam/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("collect_2", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("pixel_b9125f4");
    ns_web_url("pixel_b9125f4",
        "URL=https://www.directv.com/akam/13/pixel_b9125f4",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://a4993150444371968.cdn.optimizely.com/client_storage/a4993150444371968.html","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate","HEADER=Content-Type:application/x-www-form-urlencoded ",END_INLINE,
            "URL=https://www.directv.com/dtvassets/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923158731&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGA&_fplc=0&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923158731&sst.lpc=156962862&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=1&tag_exp=115616985~115938466~115938468~118012007~118897920~118897930~119896803&sid=1785923160&sct=1&seg=0&dl=https%3A%2F%2Fwww.directv.com%2F&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&_tu=BA&en=page_view&_fv=1&_nsi=1&_ss=1&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2F&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=gtm.init&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2F&ep.hitTraceId=undefined%7Cundefined&ep.content_group=Sales&ep.MarTechHitTraceId=712581662936-1785923159690&epn.timestamp=1785923159688&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=configuration&ep.event_name=configuration&ep.braze_ext_id=&up.ipSourceType=external&tfd=3565&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923158731&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&_fplc=0&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923158731&sst.lpc=156962862&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=2&tag_exp=115616985~115938466~115938468~118012007~118897920~118897930~119896803&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2F&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&_tu=BA&en=page_view&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2F&ep.hit_type=page_view&ep.querystring_extension=&ep.gtm_debug=gtm.js&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2F&ep.hitTraceId=undefined%7Cundefined&ep.content_group=Sales&ep.MarTechHitTraceId=18487286401536-1785923159733&epn.timestamp=1785923159732&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=page_view&ep.event_name=configuration&ep.braze_ext_id=&ep.browserGpcFlag=undefined&ep.isGpcEnabled=undefined&ep.marketingCookieConsent=undefined&tfd=3579&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/_/service_worker/67r0/sw_iframe.html?origin=https%3A%2F%2Fwww.directv.com&1p=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("pixel_b9125f4", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("events");
    ns_web_url("events",
        "URL=https://logx.optimizely.com/v1/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_events_main_6_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.directv.com/uf/_next/static/chunks/87797.6ccf23103e2d4244.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/89699.51a39b72a5d7a009.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("events", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("session_json");
    ns_web_url("session_json",
        "URL=https://celebrus.directv.com/5185/js/events/v10/session.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_session_json_main_7_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://solutions.invocacdn.com/js/invoca-latest.min.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("session_json", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("connect");
    ns_web_url("connect",
        "URL=https://cloud3.zineone.com/c3/api/v1/connect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_connect_main_8_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://analytics.google.com/g/s/collect?dma=0&npa=0&gcd=13l3l3l3l1l1&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215454~117215454~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s0t18&_tu=BA&gap.sstd=5&_gsid=LEXYQWQ1NFCAySPfUMGGUv1CQPd13-MA","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923158731&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923158731&sst.lpc=156962862&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=3&tag_exp=115616985~115938466~115938468~118012007~118897920~118897930~119896803&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2F&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&_tu=BA&en=video_commence&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2F&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=trackEvent&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923160%24j60%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=9625589728272-1785923163052&epn.timestamp=1785923163058&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=video_commence&ep.event_name=configuration&ep.braze_ext_id=&ep.video_status=auto&ep.video_name=Tangerine%20Ambient%20video&ep.video_id=https%3A%2F%2Fwww.directv.com%2Fassets%2Fcontent%2F383jbgbkax%2Fmp4%2F7996450_Saquon_MQ_16x9.mp4&epn.video_length_total=5&epn.video_length_viewed=0&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.subscriberType=&up.user_pseudo_id=GA1.1.573265066.1785923160&tfd=6167&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("connect", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("tnJV4B_2");
    ns_web_url("tnJV4B_2",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_2_main_9_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://data.directv.com/_/service_worker/67r0/sw.js?origin=https%3A%2F%2Fwww.directv.com","METHOD=GET","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:serviceworker","HEADER=Service-Worker:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:same-origin","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("tnJV4B_2", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("jsEvent_json");
    ns_web_url("jsEvent_json",
        "URL=https://celebrus.directv.com/5185/9007199257544170/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_main_10_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215454~117215454~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s0t18&_tu=BA&gap.sstd=5&aip=1&z=1562304406","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("jsEvent_json", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("tnJV4B_3");
    ns_web_url("tnJV4B_3",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_3_main_11_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://analytics.google.com/g/s/collect?dma=0&npa=0&gcd=13l3l3l3l1l1&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s0t3&_tu=BA&gap.sstd=5&_gsid=LEXYQWQ1NFWjVHCjiCNikZ1GfAAFzjbA","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s0t3&_tu=BA&gap.sstd=5&aip=1&z=175706288","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://stats.g.doubleclick.net/g/collect?v=2&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s0t3&_tu=BA&gap.sstd=5&aip=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/volume_off_60px.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/pause_60px.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.201.js?utv=ut4.54.202602201826","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.17.js?utv=ut4.54.202602201826","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.245.js?utv=ut4.54.202602201833","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938466~115938468~117215455~117215455~117215457~117215457~118012007~118032361~118032361~118897920~118897930~119896803&_is_sw=f15s1t2605&_tu=BA&gap.sstd=5&aip=1&z=60586812","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("tnJV4B_3", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("collect_3");
    ns_web_url("collect_3",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923158731&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923158731&sst.lpc=156962862&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=4&tag_exp=115616985~115938466~115938468~118012007~118897920~118897930~119896803&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2F&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&_tu=BA&tfd=7446&richsstsse",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_3_main_12_0.text",
        BODY_END
    );
    ns_end_transaction("collect_3", NS_AUTO_STATUS);
    ns_page_think_time(0.278);
    ns_start_transaction("college_sports");
    ns_web_url("college_sports",
        "URL=https://www.directv.com/sports/college-sports/",
        "METHOD=GET",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:navigate"
    );
    ns_end_transaction("college_sports", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_4");
    ns_web_url("collect_4",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923158731&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923158731&sst.lpc=156962862&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=5&tag_exp=115616985~115938466~115938468~118012007~118897920~118897930~119896803&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2F&dt=DIRECTV%20%7C%20Stream%20Your%20Way%20%7C%20Call%201-800-DIRECTV%20(1-800-347-3288)&_tu=BA&tfd=7480&richsstsse",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_4_main_14_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://cloud3.zineone.com/c3/api/v1/connectwebsocket/9dc3e61d-880d-4788-b837-707c75d68a6b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Content-Type:text/plain","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("collect_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_2");
    ns_web_url("jsEvent_json_2",
        "URL=https://celebrus.directv.com/5185/9007199257544170/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_2_main_15_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-12050451","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("jsEvent_json_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("inp");
    ns_web_url("inp",
        "URL=https://www.directv.com/uf/api/rum/inp/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Light.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/bco2f8eiis/web/5636402-FlexMQ-LG-DSK.jpg?position=c&color=ffffff00&quality=80&u=pw0kir?imwidth=1200&noretina=true","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/62646.7763f91fed7481f4.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/92716.26dabf18c0ebd966.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/d15d2df3.2b711da3a79f77e0.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/73196.f56b1315593afea6.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/70631.b017387de011203d.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/65153.21e42c2ca8f28de0.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/35002.0a6e8372ec3321cf.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/oue1rsdpxn/web/5636402-WAC-4up-static-Basketball.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/r9rrq3qv4u/web/5636402-WAC-4up-static-Football.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/83457.dd6c03a9f6a7f310.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/76568.2d24c20b300c4344.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/70335.731683345134d3d8.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/akam/13/b9125f4","METHOD=GET","HEADER=If-None-Match:\"d974a906992d436b67772540f006a79bef2e1150465540d35996a28182b45477\"","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=If-Modified-Since:Thu, 22 Feb 2024 19:40:21 GMT","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/Control-Check-gray.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/Control-Minus-gray.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/ab2orjlzn6/web/5636402-WAC-4up-static-Baseball.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/01n0ioqgls/web/5636402-WAC-4up-static-Softball.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/thwcvvint3/web/5636402-WAC-4up-static-Volleyball.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/n9qcqmla3q/web/5636402-WAC-4up-static-Soccer.jpg?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("inp", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("tnJV4B_4");
    ns_web_url("tnJV4B_4",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_4_main_17_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.googletagmanager.com/gtm.js?id=GTM-PJR2VDH&gtm_auth=cvrSnbSB4i9EeyExvYzmrg&gtm_preview=env-1&gtm_cookies_win=x","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("tnJV4B_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("getOffers_2");
    ns_web_url("getOffers_2",
        "URL=https://www.directv.com/shop/api/getOffers",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=idp-source:DTVS",
        "HEADER=appName:UF",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_getOffers_2_main_18_0.json",
        BODY_END
    );
    ns_end_transaction("getOffers_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_5");
    ns_web_url("collect_5",
        "URL=https://www.google.com/ccm/collect?rcb=12&frm=0&apvc=1&ae=g&auid=1143583505.1785923160&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2139383364.1785923166&navt=n&npa=0&ep.ads_data_redaction=0&gtm=45He6831v848825936za200zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&tft=1785923165860&tfd=1465&fmt=8",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.directv.com/content/dam/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.appboycdn.com/web-sdk/6.8/braze.no-amd.min.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://znbx3lsjyv0b2ukcw-dtvresearch.siteintercept.qualtrics.com/SIE/?Q_ZID=ZN_bx3LsjYv0B2uKCW","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://sierra.chat/agent/4QpFj40BkclJ60wBkcnYOoWQDHuAyiA1DPD6MLm-wkY/custom","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.directv.com/insider/wp-json/dtv/v1/search-by-keywords?s=dribble","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=1&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=page_view&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=gtm.init&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923164%24j56%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=70088413824-1785923165792&epn.timestamp=1785923165790&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=configuration&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&up.user_pseudo_id=GA1.1.573265066.1785923160&up.ipSourceType=external&tfd=1626&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=2&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=page_view&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=page_view&ep.querystring_extension=&ep.gtm_debug=gtm.js&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923164%24j56%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=5494994650368-1785923165817&epn.timestamp=1785923165816&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=page_view&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.browserGpcFlag=undefined&ep.isGpcEnabled=undefined&ep.marketingCookieConsent=undefined&_et=2&tfd=1636&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=3&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=view_item_list&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=ecommerce_event&ep.querystring_extension=&ep.gtm_debug=view_item_list&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923164%24j56%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=1691234028-1785923165841&epn.timestamp=1785923165840&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=view_item_list&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.gtm_container_version=2665&ep.gtm_container_id=GTM-PJR2VDH&ep.gtm_env=Live&_et=2&ep.user_data._tag_mode=AUTO&tfd=1647&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=4&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=view_item_list&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=ecommerce_event&ep.querystring_extension=&ep.gtm_debug=view_item_list&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923164%24j56%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=37120674759000-1785923165855&epn.timestamp=1785923165854&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=view_item_list&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.gtm_container_version=2665&ep.gtm_container_id=GTM-PJR2VDH&ep.gtm_env=Live&_et=3&ep.user_data._tag_mode=AUTO&tfd=1656&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://a4993150444371968.cdn.optimizely.com/client_storage/a4993150444371968.html","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=5&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=scroll_depth_10%25&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923166%24j54%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=28336192353839-1785923166156&epn.timestamp=1785923166154&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_10%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=110&tfd=1772&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("collect_5", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("pixel_b9125f4_2");
    ns_web_url("pixel_b9125f4_2",
        "URL=https://www.directv.com/akam/13/pixel_b9125f4",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://www.directv.com/favicon.ico","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:application/x-www-form-urlencoded ",END_INLINE,
            "URL=https://www.directv.com/dtvassets/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("pixel_b9125f4_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_3");
    ns_web_url("index_3",
        "URL=https://www.directv.com/insider/wp-json/dtv/v1/search-by-keywords/?s=dribble",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://data.directv.com/_/service_worker/67r0/sw_iframe.html?origin=https%3A%2F%2Fwww.directv.com&1p=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://cloud3.zineone.com/c3/api/v1/connectwebsocket/9dc3e61d-880d-4788-b837-707c75d68a6b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Content-Type:text/plain","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("index_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("session_json_2");
    ns_web_url("session_json_2",
        "URL=https://celebrus.directv.com/5185/js/events/v10/session.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_session_json_2_main_22_0.text",
        BODY_END
    );
    ns_end_transaction("session_json_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("data");
    ns_web_url("data",
        "URL=https://sdk.iad-05.braze.com/api/v3/data/",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=X-Braze-TriggersRequest:true",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=X-Braze-Req-Attempt:1",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=X-Braze-Last-Req-Ms-Ago:7200000",
        "HEADER=X-Braze-DataRequest:true",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=X-Braze-Api-Key:795e2050-a249-4266-b25b-b6882659271a",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_data_main_23_0.json",
        BODY_END
,
        INLINE_URLS,
            "URL=https://use.fontawesome.com/7f85a56ba4.css","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:style","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.252.js?utv=ut4.54.202602201833","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/881.65c406596abf35768129.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=www.directv.com","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/963.c66321cb3f9f4543e3c6.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=www.directv.com","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://solutions.invocacdn.com/js/networks/2074/0288648893/tag-live.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=f15s0t1&_tu=BA&gap.sstd=5&aip=1&z=131674418","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215455~117215455~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=f15s0t12&_tu=BA&gap.sstd=5&aip=1&z=1885643806","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=f15s0t23&_tu=BA&gap.sstd=5&aip=1&z=893074461","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~117215459~117215459~117549814~117549814~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=f15s0t32&_tu=BA&gap.sstd=5&aip=1&z=2006272580","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/otSDKStub.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.quantummetric.com/qscripts/quantum-dtv.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215455~117215455~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=f15s0t148&_tu=BA&gap.sstd=5&aip=1&z=1285573308","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("data", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("tnJV4B_5");
    ns_web_url("tnJV4B_5",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_5_main_24_0.text",
        BODY_END
    );
    ns_end_transaction("tnJV4B_5", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("Targeting_php");
    ns_web_url("Targeting_php",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Targeting.php?Q_ZoneID=ZN_bx3LsjYv0B2uKCW&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web",
        "METHOD=POST",
        "HEADER=Content-Type:application/x-www-form-urlencoded ",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "Q_LOC=https://www.directv.com/sports/college-sports/&xmdRetryCount=0&hasAnalyticsConsent=null&Timestamp=2026-08-05T09:46:06.503Z",
        BODY_END
    );
    ns_end_transaction("Targeting_php", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("c37345a0_f820_4777_9d9d_dfc3");
    ns_web_url("c37345a0_f820_4777_9d9d_dfc3",
        "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/c37345a0-f820-4777-9d9d-dfc31170677a.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("c37345a0_f820_4777_9d9d_dfc3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_3");
    ns_web_url("jsEvent_json_3",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_3_main_27_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://use.fontawesome.com/releases/v4.7.0/css/font-awesome-css.min.css","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:style","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("jsEvent_json_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("d");
    ns_web_url("d",
        "URL=https://ingest.quantummetric.com/horizon/d",
        "METHOD=HEAD",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("d", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("na_json");
    ns_web_url("na_json",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_main_29_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/CoreModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("na_json", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("location");
    ns_web_url("location",
        "URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/147.0090a6fba15eaae458a6.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/85.dfe3f3bafcad8b65e5e9.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/EmbeddedTargetModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/WebResponsiveDialogModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("location", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("Asset_php");
    ns_web_url("Asset_php",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=SI_6JdNpLb7pIW0B3U&Version=6&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("Asset_php_2");
    ns_web_url("Asset_php_2",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=CR_3OT4dZ6SVd5KdQq&Version=1&Q_InterceptID=SI_6JdNpLb7pIW0B3U&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("Asset_php_3");
    ns_web_url("Asset_php_3",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=SI_djbXWUSXzUcsPaF&Version=5&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("Asset_php_4");
    ns_web_url("Asset_php_4",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=CR_30vrVXmB0AHZTkq&Version=4&Q_InterceptID=SI_djbXWUSXzUcsPaF&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/otBannerSdk.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("Asset_php_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("events_2");
    ns_web_url("events_2",
        "URL=https://sierra.chat/-/api/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_events_2_main_35_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://sierra.chat/-/cdn/Y38tJejIGFbmunRhtm4OPskLrro.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-12050451&cx=c&gtm=4e6831","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-12050451","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.27.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.14.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.203.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.278.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.382.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.370.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.531.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.394.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.399.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.396.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.397.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.421.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.433.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.471.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.506.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.508.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/utag/directv/main/prod/utag.555.js?utv=ut4.54.202606112229","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("events_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("en_json");
    ns_web_url("en_json",
        "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/019efa33-0ce9-76ab-aa9e-dbf168a2bf82/en.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("en_json", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("originId");
    ns_web_url("originId",
        "URL=https://cloud3.zineone.com/c3/api/v1/originId?originId=9e300d34-d3c4-46ac-aef7-74c49fe16ac5&profileId=b18130f7-c32c-4684-b705-a5fced49d989",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_originId_main_37_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://sierra.chat/-/cdn/1ryKg6_jUh__CwYAHozGm_wnMbU.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://sierra.chat/-/cdn/d5YlBEDJGN5D0KtFJNhao6-oXQ4.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/qJ31DbE1i-CmsuHNdCXw5ujIgB8.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/iNlO2fAGjwqMWKn8-EXRlVwXkfI.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/XgamTLmuiYUXbrHkrGHWrNL_VV0.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/vTdX1QjKeysMCr9tesws_OBh0S4.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/Dv4tu_7JDZOFiuSGzuyT2NXolXY.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://trkn.us/pixel/conv/ppt=21080;g=landing_pages;gid=49355?_rnd=0.7487731510837361","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://c.amazon-adsystem.com/aat/amzn.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-16624272110&cx=c&gtm=4e6831","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://analytics-sm.com/js/v1/beacon.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/up_loader.1.1.0.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-10837652692&cx=c&gtm=4e6831","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://bat.bing.com/bat.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.redditstatic.com/ads/pixel.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/container/19536;124481;13503;iframe/?ft_referrer=https%3A//www.directv.com/sports/college-sports/%3F~&ns=https%3A//www.directv.com/&cb=812124.5547688669","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/container/25776;130445;14358;iframe/?ft_referrer=https%3A//www.directv.com/sports/college-sports/%3F~&ns=https%3A//www.directv.com/&cb=191625.68931923062","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://www.directv.com/tag_path/profile/visit/js/1_0?dtm_cid=82607&dtm_cmagic=ec8194&dtm_fid=101&dtmc_tms=1&dtm_promo_id=1&cachebuster=4249273992070144&dtmc_loc=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://trkn.us/pixel/conv/ppt=21080;g=landing_pages;gid=49355?_rnd=0.7487731510837361;ip=61.12.67.22;cuidchk=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("originId", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("events_3");
    ns_web_url("events_3",
        "URL=https://logx.optimizely.com/v1/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_events_3_main_38_0.text",
        BODY_END
    );
    ns_end_transaction("events_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv");
    ns_web_url("dtv",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923166552&P=0&N=0&S=0&b=1395&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_main_39_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://c.amazon-adsystem.com/aat/amzn.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=direc00;cat=direc008;rcb=18;ord=5434438720434;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=direc005;cat=dv3600;rcb=18;ord=2177336688228;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=strea0;cat=strea016;rcb=18;ord=1;num=3979895407679;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("dtv", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_6");
    ns_web_url("collect_6",
        "URL=https://www.google.com/ccm/collect?rcb=18&frm=0&apvc=0&auid=1143583505.1785923160&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&tid=DC-12050451&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2139383364.1785923166&navt=n&npa=0&gdid=dYmQxMT&gtm=45fe6831v9172137160za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&tft=1785923167572&tfd=3177&tids=DC-12050451&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_6", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_4");
    ns_web_url("jsEvent_json_4",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_4_main_41_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/16624272110/?random=1785923167653&cv=11&fst=1785923167653&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("jsEvent_json_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_4");
    ns_web_url("index_4",
        "URL=https://www.google.com/rmkt/collect/16624272110/?random=1785923167653&cv=11&fst=1785923167653&fmt=8&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_5");
    ns_web_url("index_5",
        "URL=https://www.googleadservices.com/pagead/conversion/16624272110/?random=1785923167678&cv=11&fst=1785923167678&fmt=7&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&oid=4249273992070144&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=1~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Attribution-Reporting-Eligible:trigger",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Attribution-Reporting-Support:web",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_5", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_7");
    ns_web_url("collect_7",
        "URL=https://www.google.com/ccm/collect?rcb=18&frm=0&apvc=0&auid=1143583505.1785923160&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&tid=AW-16624272110&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2139383364.1785923166&navt=n&npa=0&ep.enable_event_matching_conversions=false&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&tft=1785923167685&tfd=3291&tids=AW-16624272110&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_7", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("config");
    ns_web_url("config",
        "URL=https://pixel-config.reddit.com/pixels/t2_5iplaapd/config",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://alb.reddit.com/rp.gif?ts=1785923167711&id=t2_5iplaapd&event=PageVisit&m.itemCount=&m.value=&m.valueDecimal=&m.currency=&m.transactionId=&m.customEventName=&m.products=&m.conversionId=&uuid=a6d5b647-c78c-403f-98cc-752458aec5f6&aaid=&external_id=&idfa=&integration=reddit&partner=TEALIUM&partner_version=&opt_out=0&sh=1897&sw=1108&v=rdt_b6dc0919&dpm=&dpcc=&dprc=&esurl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&db=tsc-0.isc-0.pp-0.fetch-1.mo-1.iframe-0.ww-0.qsa-1.srv_cfg-0.src_pid-0","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://alb.reddit.com/rp.gif?ts=1785923167713&id=t2_5iplaapd&event=PageVisit&m.itemCount=&m.value=&m.valueDecimal=&m.currency=&m.transactionId=&m.customEventName=&m.products=&m.conversionId=&uuid=a6d5b647-c78c-403f-98cc-752458aec5f6&aaid=&external_id=&idfa=&integration=reddit&partner=TEALIUM&partner_version=&opt_out=0&sh=1897&sw=1108&v=rdt_b6dc0919&dpm=&dpcc=&dprc=&esurl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&db=tsc-0.srv_cfg-0.src_pid-0","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CLvJhKCaiZYDFTPHhAAdak0EMg;src=12050451;type=direc00;cat=direc008;rcb=18;ord=5434438720434;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://connect.facebook.net/signals/config/1990543777800675?v=2.9.370&r=stable&domain=www.directv.com&hme=589ca7d2e122c6385be4e33d0bc38dace8e88b62db3f4bee0e6f01d386858e70&ex_m=108%2C210%2C160%2C22%2C73%2C74%2C151%2C69%2C68%2C11%2C169%2C93%2C16%2C143%2C131%2C39%2C76%2C81%2C139%2C165%2C171%2C26%2C27%2C28%2C30%2C48%2C152%2C78%2C116%2C18%2C20%2C44%2C40%2C42%2C41%2C86%2C95%2C99%2C114%2C150%2C153%2C46%2C115%2C24%2C21%2C123%2C70%2C36%2C155%2C154%2C156%2C147%2C145%2C25%2C35%2C59%2C113%2C167%2C71%2C17%2C158%2C118%2C84%2C67%2C19%2C88%2C89%2C120%2C87%2C141%2C140%2C144%2C100%2C166%2C34%2C49%2C117%2C47%2C8%2C4%2C5%2C7%2C6%2C3%2C94%2C105%2C172%2C177%2C224%2C75%2C237%2C236%2C235%2C23%2C33%2C55%2C107%2C61%2C10%2C64%2C101%2C102%2C103%2C109%2C134%2C31%2C29%2C136%2C137%2C138%2C133%2C132%2C161%2C77%2C164%2C162%2C163%2C50%2C60%2C127%2C15%2C168%2C45%2C281%2C282%2C280%2C295%2C313%2C217%2C206%2C62%2C207%2C205%2C316%2C307%2C52%2C218%2C111%2C135%2C83%2C125%2C54%2C124%2C130%2C129%2C58%2C65%2C63%2C157%2C79%2C80%2C119%2C37%2C32%2C53%2C56%2C104%2C170%2C1%2C128%2C14%2C126%2C12%2C2%2C57%2C96%2C66%2C122%2C92%2C91%2C173%2C174%2C97%2C98%2C9%2C106%2C51%2C148%2C90%2C82%2C72%2C121%2C110%2C43%2C149%2C0%2C85%2C142%2C146%2C159%2C38%2C112%2C13%2C175","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&gpp_consent=&ref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=p1khwya&cookie_sync=1&upv=3.0.0&upid=edw9roa&gpp_consent=&ref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("config", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("allowlist_json");
    ns_web_url("allowlist_json",
        "URL=https://c.amazon-adsystem.com/aat/allowlist/allowlist.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/otGPP.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CMHAlKCaiZYDFVXEhAAd-lQaOA;src=12050451;type=direc005;cat=dv3600;rcb=18;ord=2177336688228;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CJ3blKCaiZYDFR_OhAAdDloCEg;src=12050451;type=strea0;cat=strea016;rcb=18;ord=1;num=3979895407679;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/129.fe865cd4ba5b51cf9432.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/305.d4dcba7e4049e6a7e76a.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/948.d6b81f4d8748fbbef855.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/994.53653390ff50e4841591.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/179.1c20a30d47822898af46.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1785923168075&cv=11&fst=1785923168075&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("allowlist_json", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_6");
    ns_web_url("index_6",
        "URL=https://www.google.com/rmkt/collect/10837652692/?random=1785923168075&cv=11&fst=1785923168075&fmt=8&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_6", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("X0837652692");
    ns_web_url("X0837652692",
        "URL=https://www.google.com/ccm/form-data/10837652692?gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&rcb=19&did=dYmQxMT&gdid=dYmQxMT&npa=0&frm=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=c&em=tv.1&emd=tvd.1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1785923168105&cv=11&fst=1785923168105&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("X0837652692", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_7");
    ns_web_url("index_7",
        "URL=https://www.google.com/rmkt/collect/10837652692/?random=1785923168105&cv=11&fst=1785923168105&fmt=8&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_7", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_8");
    ns_web_url("collect_8",
        "URL=https://www.google.com/ccm/collect?rcb=19&frm=0&apvc=0&auid=1143583505.1785923160&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&tid=AW-10837652692&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2139383364.1785923166&navt=n&npa=0&ep.enable_event_matching_conversions=false&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&tft=1785923168117&tfd=3723&tids=AW-10837652692&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_8", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_9");
    ns_web_url("collect_9",
        "URL=https://www.google.com/ccm/collect?rcb=19&frm=0&apvc=0&auid=1143583505.1785923160&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&tid=AW-10837652692&en=searchpv&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&scrsrc=www.googletagmanager.com&rnd=2139383364.1785923166&navt=n&npa=0&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&tft=1785923168118&tfd=3723&tids=AW-10837652692&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://match.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&gpp_consent=&ref=https%3a%2f%2fwww.directv.com&redirect=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://match.adsrvr.org/track/cei?advertiser_id=p1khwya&cookie_sync=1&upv=3.0.0&upid=edw9roa&gpp_consent=&ref=https%3a%2f%2fwww.directv.com&redirect=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://bat.bing.com/p/action/138003007.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.3c5b736e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://sierra.chat/agent/4QpFj40BkclJ60wBkcnYOoWQDHuAyiA1DPD6MLm-wkY/embed-css","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:style","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&gpp_consent=&ref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F","METHOD=GET",END_INLINE,
            "URL=https://sierra.chat/-/cdn/FpL-JUm6ifbsCEmLMj-shkLEVcU.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/spot/8/25776;153951;14358/?ft_referrer=https%3A//www.directv.com/sports/college-sports/%3F~&ns=https%3A//www.directv.com/&cb=191625.68931923062","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/segment/2/read/a;;pixel/?s=14358&d=www.directv.com&r=sports/college-sports/","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/segment/2/read/a;;pixel/?s=13503&d=www.directv.com&r=sports/college-sports/","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("collect_9", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_5");
    ns_web_url("jsEvent_json_5",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_5_main_52_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://analytics-sm.com/?bid=95d08be5-94db-4701-810b-6a3bafe321a3&smuid=1785923445898&bt=1785923168261&btz=300&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&url_path=%2Fsports%2Fcollege-sports%2F&referrer=https%3A%2F%2Fwww.directv.com%2F&title=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=10474971794889187254;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlRNydIJE4HNFvQluASFJ6zdEFebcnzq62xBvg;_dc_time=1785923167;dc_pre=CLvJhKCaiZYDFTPHhAAdak0EMg;src=12050451;type=direc00;cat=direc008;rcb=18;ord=5434438720434;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/16624272110/?random=1785923167653&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgYOKgEGbhMLdq57BCrLdo-pfXqMIYm0vqGXhvTpLc-JgeCsB0wMBUQ97xvyz-6lf6t_mSe5Yk74iG9pqEczTc5hDOwOobjGBYS2UhZDKbdMN5LJ4YZ-Aa1AivMQ26PRJr87a74JpJ3sBjee4fzFJCNpASIuP4kGDlDNTWWdu-P2pKasLxECg-Gfn_lfG3KhEnwPjfAxfCPPVs_PLqOAPwoAUXn5Gvi5_WGHzzgxmKaNUAZy_Fx2Lhgx7eROK65Zi7FclEw_-RvAoaB-gXG1k&random=1536187430&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/16624272110/?random=1785923167653&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgYOKgEGbhMLdq57BCrLdo-pfXqMIYm0vqGXhvTpLc-JgeCsB0wMBUQ97xvyz-6lf6t_mSe5Yk74iG9pqEczTc5hDOwOobjGBYS2UhZDKbdMN5LJ4YZ-Aa1AivMQ26PRJr87a74JpJ3sBjee4fzFJCNpASIuP4kGDlDNTWWdu-P2pKasLxECg-Gfn_lfG3KhEnwPjfAxfCPPVs_PLqOAPwoAUXn5Gvi5_WGHzzgxmKaNUAZy_Fx2Lhgx7eROK65Zi7FclEw_-RvAoaB-gXG1k&random=1536187430&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("jsEvent_json_5", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_8");
    ns_web_url("index_8",
        "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/16624272110/?random=93868217&cv=11&fst=1785923167678&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=1~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxG3EzfxxPpJ6Aena7XggIWbyCLFOF19nCuWMSQB6FRNtA2bgJhet8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCNTmsQIIseGxAgiz4bECCKbdsQIIsN6xAgiA27ECSgd0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzs370t24m-Laenvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrv88vXRLJULqR-QonpNQgvnXotS0mpDnand1yMcTB3cIHK9R7Ju8ShoCkPs&pscrd=IhMIuYCKoJqJlgMV_MU4Bh1c5Rd0OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1b1NVekNreFpwZm12OVlXU0xjdlhkUENmVzc2U05ZV0JUeU4tdmZGTi04eHdaMHJ5SlA1WXoMCAliCAgAEAAYACAA",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.google.com/pagead/1p-conversion/16624272110/?random=93868217&cv=11&fst=1785923167678&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=1~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxG3EzfxxPpJ6Aena7XggIWbyCLFOF19nCuWMSQB6FRNtA2bgJhet8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCNTmsQIIseGxAgiz4bECCKbdsQIIsN6xAgiA27ECSgd0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzs370t24m-Laenvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrv88vXRLJULqR-QonpNQgvnXotS0mpDnand1yMcTB3cIHK9R7Ju8ShoCkPs&pscrd=IhMIuYCKoJqJlgMV_MU4Bh1c5Rd0OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1b1NVekNreFpwZm12OVlXU0xjdlhkUENmVzc2U05ZV0JUeU4tdmZGTi04eHdaMHJ5SlA1WXoMCAliCAgAEAAYACAA&is_vtc=1&cid=CAQS0wEAEQoqgRO6RWQ_iZuJ-ofeSWxjeBsYS6yZjUfg5kaKxp9WhcDh0moQNHxmfBR48IpmxW79YYEE1OUe8zHTU81W0TW3MNLsNxjizrwtEs9tygVZnLDzjKo0K_NiPWWyMAsRaH0C4jC-B9s1mx7Mk2K6zLiTuZg7kLjIuN2Hnu5Xo21RbqzZuTcjSKwoBkV1HNvs211qy-kjFulSN82lhr9sPbFxLk5LcACs8SDURJgjTxi8THyv4CJrOUBM-DBQxxMw27HxVAkH4pga8g8HmMe9AI2Y&random=2379213324","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/assets/otCommonStyles.css","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("index_8", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_9");
    ns_web_url("index_9",
        "URL=https://ct.pinterest.com/user/?tid=2612953088789&ov=%7B%22page_name%22%3A%22Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV%22%2C%22page_category%22%3A%22%22%7D&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22e37157f91f7ff45f919823fbdd55d4f4c7ebb31462a08b6254155df4b66d4a5d%22%5D%2C%22np%22%3A%22tealium%22%7D&cb=1785923168525&dep=2%2CPAGE_LOAD",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_9", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_10");
    ns_web_url("index_10",
        "URL=https://ct.pinterest.com/user/?event=PageVisit&ed=%7B%22event_id%22%3A%224249273992070144%22%7D&tid=2612953088789&cb=1785923168527&dep=5%2CEVENT_TAGS_ABSENT",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://www.google.co.in/pagead/1p-conversion/16624272110/?random=93868217&cv=11&fst=1785923167678&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=18&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=1~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxG3EzfxxPpJ6Aena7XggIWbyCLFOF19nCuWMSQB6FRNtA2bgJhet8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCNTmsQIIseGxAgiz4bECCKbdsQIIsN6xAgiA27ECSgd0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzs370t24m-Laenvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrv88vXRLJULqR-QonpNQgvnXotS0mpDnand1yMcTB3cIHK9R7Ju8ShoCkPs&is_vtc=1&cid=CAQS0wEAEQoqgRO6RWQ_iZuJ-ofeSWxjeBsYS6yZjUfg5kaKxp9WhcDh0moQNHxmfBR48IpmxW79YYEE1OUe8zHTU81W0TW3MNLsNxjizrwtEs9tygVZnLDzjKo0K_NiPWWyMAsRaH0C4jC-B9s1mx7Mk2K6zLiTuZg7kLjIuN2Hnu5Xo21RbqzZuTcjSKwoBkV1HNvs211qy-kjFulSN82lhr9sPbFxLk5LcACs8SDURJgjTxi8THyv4CJrOUBM-DBQxxMw27HxVAkH4pga8g8HmMe9AI2Y&random=2379213324&ipr=y&pscrd=IhMIuYCKoJqJlgMV_MU4Bh1c5Rd0OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1b1NVekNreFpwZm12OVlXU0xjdlhkUENmVzc2U05ZV0JUeU4tdmZGTi04eHdaMHJ5SlA1WXoMCAliCAgAEAAYACAAggEFcAGIAQE","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/10837652692/?random=1785923168075&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgWhVZIhZsWgky99OWMHVSOEg0pdfijsYVkY0_exBnSDtyeAwdKJSCTXkixo-cZBh9D5OUfZvvEm2-JxeH3WA6HlBhES0hvNdZd2LDMVooDDwSasx4WPHg-GNF9ufThkAGDqie_Jvi7vvr2tBdFL78VZo3Uje9tnHqWy7dq_9fZDC4rVA__PpHwVgIMRbqjHtoroUsA6cxcENNw8wG48BDwWEr7hx6oGs_L8awIejX61sJRlTqxamuzHLSEg5RlL7C1ai2F4p4HGT9KQevsBL&random=1708002362&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/10837652692/?random=1785923168075&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgWhVZIhZsWgky99OWMHVSOEg0pdfijsYVkY0_exBnSDtyeAwdKJSCTXkixo-cZBh9D5OUfZvvEm2-JxeH3WA6HlBhES0hvNdZd2LDMVooDDwSasx4WPHg-GNF9ufThkAGDqie_Jvi7vvr2tBdFL78VZo3Uje9tnHqWy7dq_9fZDC4rVA__PpHwVgIMRbqjHtoroUsA6cxcENNw8wG48BDwWEr7hx6oGs_L8awIejX61sJRlTqxamuzHLSEg5RlL7C1ai2F4p4HGT9KQevsBL&random=1708002362&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/10837652692/?random=1785923168105&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgdt51Ygx0WUOJLm8f7f23MBGtIt2vpiyAziKHwJfwhEjLRvWoHCcpNJR8MP0OL9vRXe7-calC8ZT8DeFzKLpeyDZOQdkgCPCF7NMvbr_wvf3tNCtYEMN11QVTETb_AZtbXZznyctEeKQNID6oSKSs8Wl12fsMb0xrPfR5jAS4U-iBpeQifZUNVQF1VXtzVX-CSCS_qDuDCAPJb6y9V8JnFfFH_8Zu3j1zGdW2h4u2cZ71y_T8K-WyvPEqBu36gSy_gkyQaQt2G5UOs2TF227&random=2625786714&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/10837652692/?random=1785923168105&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896802&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ref=https%3A%2F%2Fwww.directv.com%2F&rcb=19&frm=0&tiba=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgdt51Ygx0WUOJLm8f7f23MBGtIt2vpiyAziKHwJfwhEjLRvWoHCcpNJR8MP0OL9vRXe7-calC8ZT8DeFzKLpeyDZOQdkgCPCF7NMvbr_wvf3tNCtYEMN11QVTETb_AZtbXZznyctEeKQNID6oSKSs8Wl12fsMb0xrPfR5jAS4U-iBpeQifZUNVQF1VXtzVX-CSCS_qDuDCAPJb6y9V8JnFfFH_8Zu3j1zGdW2h4u2cZ71y_T8K-WyvPEqBu36gSy_gkyQaQt2G5UOs2TF227&random=2625786714&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=11293460702783660306;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlTP58HvHccKVYT7yeY4DMZv-_yl5crv39BH2Q;_dc_time=1785923168;dc_pre=CMHAlKCaiZYDFVXEhAAd-lQaOA;src=12050451;type=direc005;cat=dv3600;rcb=18;ord=2177336688228;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=4797765557279408445;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlQ3qKm_LYcE8Pf1Js-2vx8aAZ8tAAZeFeBYiA;_dc_time=1785923168;dc_pre=CJ3blKCaiZYDFR_OhAAdDloCEg;src=12050451;type=strea0;cat=strea016;rcb=18;ord=1;num=3979895407679;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.facebook.com/tr/","METHOD=POST","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Content-Type:application/x-www-form-urlencoded","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET","HEADER=Content-Type:application/x-www-form-urlencoded ",END_INLINE,
            "URL=https://ct.pinterest.com/v3/?tid=2612953088789&ov=%7B%22page_name%22%3A%22Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV%22%2C%22page_category%22%3A%22%22%7D&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22e37157f91f7ff45f919823fbdd55d4f4c7ebb31462a08b6254155df4b66d4a5d%22%5D%2C%22np%22%3A%22tealium%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.directv.com%2F%22%2C%22if%22%3Afalse%2C%22sh%22%3A1108%2C%22sw%22%3A1897%2C%22mh%22%3A%223c5b736e%22%2C%22is_eu%22%3Atrue%2C%22architecture%22%3A%22x86%22%2C%22bitness%22%3A%2264%22%2C%22brands%22%3A%5B%7B%22brand%22%3A%22Chromium%22%2C%22version%22%3A%22135%22%7D%2C%7B%22brand%22%3A%22Not-A.Brand%22%2C%22version%22%3A%228%22%7D%5D%2C%22mobile%22%3Afalse%2C%22model%22%3A%22%22%2C%22platform%22%3A%22Linux%22%2C%22platformVersion%22%3A%226.8.0%22%2C%22uaFullVersion%22%3A%22135.0.7049.52%22%7D&cb=1785923168700","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("index_10", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("event");
    ns_web_url("event",
        "URL=https://cloud3.zineone.com/c3/api/v1/event",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_event_main_56_0.text",
        BODY_END
    );
    ns_end_transaction("event", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_2");
    ns_web_url("dtv_2",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923167686&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&U=9167a4fbe5361e1b0380a9b8187f5641&Q=1&Y=1&X=93a689cf929e4d7792ad3b7572c63fb2&S=0&b=236567&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_2_main_57_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_3");
    ns_web_url("dtv_3",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923167708&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&U=9167a4fbe5361e1b0380a9b8187f5641&N=0&Q=2&S=0&b=1151&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_3_main_58_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_4");
    ns_web_url("dtv_4",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923167709&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&P=1&N=1&S=0&b=10737&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_4_main_59_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://bat.bing.com/p/insights/t/138003007","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=138003007&Ver=2&mid=78ecab68-ae2a-40f1-aec9-4885eaf94943&bo=1&sid=7c332aa090b211f1ad457f22becda171&vid=7c335d2090b211f1a50405c34706bf16&vids=1&msclkid=N&pi=918639831&lg=en-US&sw=1897&sh=1108&sc=24&tl=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&kw=college%20baseball%20directv,%20college%20baseball%20on%20directv,%20college%20baseball%20channel%20directv,%20ncaa%20directv,%20NCAA,%20college%20football,%20college%20sports,%20big%20ten%20conference,%20college%20basketball,%20college%20volleyball,%20directv%20college%20baseball%20channel,%20directv%20channel%20guide%20for%20my%20area,%20what%20channel%20is%20college%20baseball%20on%20directv,%20what%20channel%20is%20college%20softball%20on%20directv,%20college%20world%20series%20on%20directv,%20directv%20sports%20pack&p=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&r=https%3A%2F%2Fwww.directv.com%2F&lt=1316&evt=pageLoad&sv=2&cdb=AQER&rn=252571","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("dtv_4", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("tnJV4B_6");
    ns_web_url("tnJV4B_6",
        "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_tnJV4B_6_main_60_0.text",
        BODY_END
    );
    ns_end_transaction("tnJV4B_6", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_6");
    ns_web_url("jsEvent_json_6",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_6_main_61_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_6", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("graphql");
    ns_web_url("graphql",
        "URL=https://sierra.chat/-/api/graphql",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_graphql_main_62_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://ct.pinterest.com/static/ct/token_create.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://ct.pinterest.com/ct.html","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("graphql", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("realtimeconversion");
    ns_web_url("realtimeconversion",
        "URL=https://insight.adsrvr.org/track/realtimeconversion",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=eventDataSource:JsSdk",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=eventDataSourceVersion:3.0.5",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_realtimeconversion_main_63_0.json",
        BODY_END
,
        INLINE_URLS,
            "URL=https://ct.pinterest.com/v3/?event=PageVisit&ed=%7B%22event_id%22%3A%224249273992070144%22%7D&tid=2612953088789&cb=1785923169017&dep=5%2CEVENT_TAGS_ABSENT&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22e37157f91f7ff45f919823fbdd55d4f4c7ebb31462a08b6254155df4b66d4a5d%22%5D%2C%22np%22%3A%22tealium%22%2C%22pin_unauth%22%3A%22dWlkPVlXVXhPR1V5Tm1JdE1UTTNPQzAwTkRZMkxUZ3dORE10WlRGaE5UY3hPR1ExWldOaQ%22%7D&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.directv.com%2F%22%2C%22if%22%3Afalse%2C%22sh%22%3A1108%2C%22sw%22%3A1897%2C%22mh%22%3A%223c5b736e%22%2C%22is_eu%22%3Afalse%2C%22is_restricted_region%22%3Afalse%2C%22architecture%22%3A%22x86%22%2C%22bitness%22%3A%2264%22%2C%22brands%22%3A%5B%7B%22brand%22%3A%22Chromium%22%2C%22version%22%3A%22135%22%7D%2C%7B%22brand%22%3A%22Not-A.Brand%22%2C%22version%22%3A%228%22%7D%5D%2C%22mobile%22%3Afalse%2C%22model%22%3A%22%22%2C%22platform%22%3A%22Linux%22%2C%22platformVersion%22%3A%226.8.0%22%2C%22uaFullVersion%22%3A%22135.0.7049.52%22%7D","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://bat.bing.com/p/insights/s/0.8.67","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("realtimeconversion", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_7");
    ns_web_url("jsEvent_json_7",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_7_main_64_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_7", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("realtimeconversion_2");
    ns_web_url("realtimeconversion_2",
        "URL=https://insight.adsrvr.org/track/realtimeconversion",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=eventDataSource:JsSdk",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=eventDataSourceVersion:3.0.5",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_realtimeconversion_2_main_65_0.json",
        BODY_END
    );
    ns_end_transaction("realtimeconversion_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_5");
    ns_web_url("dtv_5",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923168389&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&Q=1&Y=1&X=658f3e3120a443c794240f6307e7da68&S=236567&b=17472&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_5_main_66_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_5", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_6");
    ns_web_url("dtv_6",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923168390&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&Q=1&Y=1&X=05d3d1b066d14c1996540b7f714e8765&S=236567&b=64&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_6_main_67_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_6", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("y");
    ns_web_url("y",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_main_68_0.text",
        BODY_END
    );
    ns_end_transaction("y", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("hash_check");
    ns_web_url("hash_check",
        "URL=https://ingest.quantummetric.com/resource-loader/dtv/hash-check",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:deflate",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_hash_check_main_69_0.json",
        BODY_END
,
        INLINE_URLS,
            "URL=https://images-cdn3.welcomesoftware.com/assets/College+athlete+payrolls.jpg/Zz0wYWJiNDI1NGRiOTkxMWYwOTlkMTRlNDE3NWViOGVjNg==?width=400","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:application/json",END_INLINE,
            "URL=https://images-cdn2.welcomesoftware.com/assets/college+ws.jpg/Zz0zNGYxZDJkNjQyZTcxMWYwYTc1MzVhOTFkMWJlMzMwMQ==?width=400","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://images-cdn3.welcomesoftware.com/assets/softball.jpg/Zz0yOWM0MjI1YzM3MmUxMWYwOTIxMjM2YzM4MDcwMzNmNg==?width=400","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://images-cdn4.welcomesoftware.com/assets/acc+baseball.jpg/Zz02MTdmNTk1NjU0NTAxMWYxYjE1YjM2YzA3MjMyNmNmNw==?width=400","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/ojebdzjqxu/svg/privacy-choices-blue900.svg?u=zdliqe","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/56qbgxg1c3/svg/Linkedin-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/cy8dgqdux7/svg/Facebook-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/x5s3azsssk/svg/X-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/yitwp0uvb6/svg/Instagram-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/b7ubipaszq/svg/Youtube-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/xkpqo2th1o/svg/Tiktok-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/dwqbu9xept/svg/Reddit-blue900.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("hash_check", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("hashes");
    ns_web_url("hashes",
        "URL=https://ingest.quantummetric.com/resource-loader/dtv/hashes",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:deflate",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_hashes_main_70_0.json",
        BODY_END
    );
    ns_end_transaction("hashes", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_8");
    ns_web_url("jsEvent_json_8",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_8_main_71_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=6&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=scroll_depth_25%25&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923166%24j54%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=728297586926-1785923170319&epn.timestamp=1785923170318&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_25%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=4159&tfd=5938&richsstsse","METHOD=GET","HEADER=X-Effective-Origin:https://www.directv.com","HEADER=X-Effective-Referer:https://www.directv.com/sports/college-sports/","HEADER=Attribution-Reporting-Eligible:trigger;event-source","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=7&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=scroll_depth_50%25&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923170%24j50%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=15441067573384-1785923170344&epn.timestamp=1785923170343&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_50%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=18&tfd=5962&richsstsse","METHOD=GET","HEADER=X-Effective-Origin:https://www.directv.com","HEADER=X-Effective-Referer:https://www.directv.com/sports/college-sports/","HEADER=Attribution-Reporting-Eligible:trigger, not-navigation-source, not-event-source","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=8&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=scroll_depth_75%25&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923170%24j50%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=4408431567552-1785923170367&epn.timestamp=1785923170366&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_75%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=16&tfd=5983&richsstsse","METHOD=GET","HEADER=X-Effective-Origin:https://www.directv.com","HEADER=X-Effective-Referer:https://www.directv.com/sports/college-sports/","HEADER=Attribution-Reporting-Eligible:not-event-source, trigger;navigation-source","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215454~117215454~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=363011826","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=1561448867","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215454~117215454~117215457~117215457~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=458900166","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("jsEvent_json_8", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_7");
    ns_web_url("dtv_7",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923170053&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&P=2&N=2&S=10737&b=50829&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_7_main_72_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_7", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_8");
    ns_web_url("dtv_8",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923170054&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&N=1&Q=2&S=1151&b=522&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_8_main_73_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_8", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_9");
    ns_web_url("jsEvent_json_9",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_9_main_74_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_9", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_10");
    ns_web_url("jsEvent_json_10",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_10_main_75_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_10", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("y_2");
    ns_web_url("y_2",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_2_main_76_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://data.directv.com/_/service_worker/67r0/sw.js?origin=https%3A%2F%2Fwww.directv.com","METHOD=GET","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:serviceworker","HEADER=Service-Worker:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:same-origin",END_INLINE
    );
    ns_end_transaction("y_2", NS_AUTO_STATUS);
    ns_page_think_time(0.785);
    ns_start_transaction("activityi_src_12050451_type_");
    ns_web_url("activityi_src_12050451_type_",
        "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=direc00;cat=direc008;rcb=18;ord=7052084052053;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT.dYWJhMj;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;gpp=DBABLA~BAAAAAAAAABY.QA;gpp_sid=7;user_data_mode=c;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;em=tv.1;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:iframe",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:navigate",
        INLINE_URLS,
            "URL=http://directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET",END_INLINE
    );
    ns_end_transaction("activityi_src_12050451_type_", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("consentreceipts");
    ns_web_url("consentreceipts",
        "URL=https://privacyportal-directv.my.onetrust.com/request/v1/consentreceipts",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_consentreceipts_main_78_0.text",
        BODY_END
    );
    ns_end_transaction("consentreceipts", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("tr");
    ns_web_url("tr",
        "URL=https://www.facebook.com/tr/",
        "METHOD=POST",
        "HEADER=Origin:https://www.directv.com",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:iframe",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Mode:navigate"
    );
    ns_end_transaction("tr", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_10");
    ns_web_url("collect_10",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=9&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&tfd=8754&richsstsse",
        "METHOD=POST",
        "HEADER=X-Effective-Origin:https://www.directv.com",
        "HEADER=X-Effective-Referer:https://www.directv.com/sports/college-sports/",
        "HEADER=Attribution-Reporting-Eligible:trigger;navigation-source;event-source",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_10_main_80_0.text",
        BODY_END
    );
    ns_end_transaction("collect_10", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("collect_11");
    ns_web_url("collect_11",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=10&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&tfd=8827&richsstsse",
        "METHOD=POST",
        "HEADER=X-Effective-Origin:https://www.directv.com",
        "HEADER=X-Effective-Referer:https://www.directv.com/sports/college-sports/",
        "HEADER=Attribution-Reporting-Eligible:not-navigation-source, trigger;event-source",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_11_main_81_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:document","HEADER=Sec-Fetch-User:?1","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("collect_11", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_11");
    ns_web_url("jsEvent_json_11",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_11_main_82_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CKba1qKaiZYDFf3ThAAdtqMSlw;src=12050451;type=direc00;cat=direc008;rcb=18;ord=7052084052053;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT.dYWJhMj;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;gpp=DBABLA~BAAAAAAAAABY.QA;gpp_sid=7;user_data_mode=c;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;em=tv.1;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Sec-Fetch-User:?1","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://adservice.google.com/ddm/fls/z/dc_pre=CKba1qKaiZYDFf3ThAAdtqMSlw;src=12050451;type=direc00;cat=direc008;rcb=18;ord=7052084052053;npa=0;auiddc=*;gdid=dYmQxMT.dYWJhMj;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;gpp=DBABLA~BAAAAAAAAABY.QA;gpp_sid=7;user_data_mode=c;_tu=IFA;gtm=45fe6831v9172137160za200zb848825936zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;em=tv.*;~oref=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~117215459~117215459~117549814~117549814~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=773786121","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115616985~115938465~115938469~117215457~117215457~117215458~117215458~118032361~118032361~118395333~118897920~118897930~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=793800434","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("jsEvent_json_11", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("y_3");
    ns_web_url("y_3",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_3_main_83_0.text",
        BODY_END
    );
    ns_end_transaction("y_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("jsEvent_json_12");
    ns_web_url("jsEvent_json_12",
        "URL=https://celebrus.directv.com/5185/9007199257544174/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_12_main_84_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_12", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_9");
    ns_web_url("dtv_9",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923173554&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&P=3&N=3&S=61566&b=20868&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_9_main_85_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_9", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("dtv_10");
    ns_web_url("dtv_10",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923173554&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&N=2&Q=2&S=1673&b=1529&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_10_main_86_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_10", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("na_json_2");
    ns_web_url("na_json_2",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_2_main_87_0.text",
        BODY_END
    );
    ns_end_transaction("na_json_2", NS_AUTO_STATUS);
    ns_page_think_time(0.007);
    ns_start_transaction("index_2");
    ns_web_url("index_2",
        "URL=https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b",
        "METHOD=GET",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:navigate"
    );
    ns_end_transaction("index_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("inp_2");
    ns_web_url("inp_2",
        "URL=https://www.directv.com/uf/api/rum/inp/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("inp_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_12");
    ns_web_url("collect_12",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018za20gzb848825936zd848825936&_p=1785923165182&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=17&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923165182&sst.lpc=181195826&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=11&tag_exp=115616985~115938465~115938469~118395333~118897920~118897930~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&dr=https%3A%2F%2Fwww.directv.com%2F&dt=Stream%20NCAA%20College%20Sports%20Live%20on%20DIRECTV&_tu=BA&en=user_engagement&gap.sstd=5&ep.querystring=&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=gtm.init&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D&ep.page=%2Fsports%2Fcollege-sports%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923164%24j56%24l0%24h666784750&ep.content_group=Discovery&ep.MarTechHitTraceId=70088413824-1785923165792&epn.timestamp=1785923165790&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Content%20Hub&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=configuration&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&_et=1793&tfd=10629",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_12", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_11");
    ns_web_url("dtv_11",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923174183&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&f=1785923174183&N=3&Q=2&S=3202&b=377&z=2",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_11_main_91_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_11", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_12");
    ns_web_url("dtv_12",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fsports%2Fcollege-sports%2F&t=1785923166181&v=1785923174184&H=5f06736aaaaee1cda94efb0f&s=15ee8da754a44c11862cb214234d6b3a&f=1785923174183&P=4&N=4&S=82434&b=90&z=2",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_12_main_92_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_12", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("X");
    ns_web_url("X",
        "URL=https://bat.bing.com/actionp/0?ti=138003007&Ver=2&mid=78ecab68-ae2a-40f1-aec9-4885eaf94943&bo=2&sid=7c332aa090b211f1ad457f22becda171&vid=7c335d2090b211f1a50405c34706bf16&vids=1&msclkid=N&evt=pageHide",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("X", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("y_4");
    ns_web_url("y_4",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_4_main_94_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.directv.com/dtvassets/sales/uf/dtv-ui/fonts/PFDINTextPro-Light.woff2","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:font","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.directv.com/assets/content/2vuhdomoim/web/8176850_Flex%20MQ%20-%20LG%20Desktop%201920.jpg?position=c&color=ffffffff&quality=80&u=pw0kir?imwidth=1200&noretina=true","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/pbnaj/4ZHL/O-xM/pbLu/NPG/iJ3LNpiaOmYhz0ubJ1/FXwEbR59TQ4/fWw_PT/tnJV4B","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/aojoivyzga/web/6735753-Content-Card-v2.png?position=c&color=ffffffff&quality=80&u=pw0kir?imwidth=600&noretina=true","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/36420.75b46f3f09557f7f.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/69437.d3aa30241b6b534d.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/8077-4c18718ba57b0dff.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/87578.a4420e856473e2b4.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/17358.94e47337eb9ac734.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/50972-fd4204d608984647.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/37121.00d24c262daecf22.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/34889.3400177ffcef2b82.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/93987.9b065ea8830270b7.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/common-ui-components.f61a702d3e70f164.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/79764.e42ea0b80b8c0acf.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/eai37kooyy/web/SVOD-badge-Disney-2x.png","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/fusion/arrow_jet_up.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/icons/2022/list-checkmark_ozone.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/drcgss4ak1/svg/SVOD-app-logo_STARZ.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/5qqd8y0a15/svg/SVOD-app-logo_Paramount-plus.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/qog4hlyj0j/svg/5350356-review-carousel-logo-YahooTech.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/pnjv9lssfm/svg/5350356-review-carousel-logo-BusinessInside.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/sgzjkfjmlo/svg/5350356-review-carousel-logo-TrustedReviews.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/c-d/Channel_Icon_CNN.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/e-g/Channel_Icon_FoxNews.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/e-g/Channel_Icon_FS1.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/e-g/Channel_Icon_FoodNetwork.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/a-b/Channel_Icon_ACCN-ESPN.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/4eigzct7o5/svg/Channel_Icon_BIGNetwork.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/m-n/Channel_Icon_MLB.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/m-n/Channel_Icon_NBA.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/c-d/Channel_Icon_CBSsports.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/e-g/Channel_Icon_FXM.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/m-n/Channel_Icon_NHL.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/dtvassets/global/channel-icons/r-s/Channel_Icon_STARZ-ENCORE.svg","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/ziey6ut3jb/svg/Channel_Icon_Hallmark-MM.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/wc9khvjon4/svg/Channel_Icon_MagnoliaNetwork.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/zgtivzyzbp/svg/Channel_Icon_FS2.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/ypb6r7i0yq/svg/Channel_Icon_Discovery-Family.svg?u=pw0kir","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googletagmanager.com/gtm.js?id=GTM-PJR2VDH&gtm_auth=cvrSnbSB4i9EeyExvYzmrg&gtm_preview=env-1&gtm_cookies_win=x","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/121c3f43.72b268e182404760.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/4602-faf9d185d8973600.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/49400-0ba31fbeb92d04e2.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/32121-27736ec094a856b2.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/90343-e0a8bfa72aa888fa.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/18736.a3661c69dc13f93a.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/46097.6e71c4dde43344e7.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/62237-293e00531abb740e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/4767.e1a52fc28df6221a.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/76584.b04dd6cb01360824.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("y_4", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("getOffers_3");
    ns_web_url("getOffers_3",
        "URL=https://www.directv.com/shop/api/getOffers",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=idp-source:DTVS",
        "HEADER=appName:UF",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_getOffers_3_main_95_0.json",
        BODY_END
    );
    ns_end_transaction("getOffers_3", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("X5001");
    ns_web_url("X5001",
        "URL=https://www.directv.com/xapi/beamlocalchannellookupms/v1/channels/county/zipcode/75001",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=content-type:application/json",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://www.directv.com/uf/_next/static/chunks/76553.1621e9c86630e3dc.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=G-LEXYQWQ1NF&cx=c&gtm=4e6831","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("X5001", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_13");
    ns_web_url("collect_13",
        "URL=https://www.google.com/ccm/collect?rcb=10&frm=0&apvc=1&ae=g&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&ep.ads_data_redaction=0&gtm=45He6831v848825936za200zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118897920~118897930~119896803&tft=1785923176211&tfd=2960&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.directv.com/content/dam/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://a4993150444371968.cdn.optimizely.com/client_storage/a4993150444371968.html","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://www.directv.com/dtvassets/gtm/marketing/jslibrary/invoca.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cloud3.zineone.com/c3/api/v1/connectwebsocket/9dc3e61d-880d-4788-b837-707c75d68a6b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Content-Type:text/plain","HEADER=Sec-Fetch-Mode:cors",END_INLINE
    );
    ns_end_transaction("collect_13", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("session_json_3");
    ns_web_url("session_json_3",
        "URL=https://celebrus.directv.com/5185/js/events/v10/session.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_session_json_3_main_98_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=1&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&en=page_view&gap.sstd=5&ep.querystring=%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=gtm.init&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fpackages%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923175%24j45%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=710161465104-1785923176173&epn.timestamp=1785923176171&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=configuration&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&up.user_pseudo_id=GA1.1.573265066.1785923160&up.ipSourceType=external&tfd=3419&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("session_json_3", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_14");
    ns_web_url("collect_14",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=a&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=2&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&tfd=3428&richsstsse",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_14_main_99_0.text",
        BODY_END
    );
    ns_end_transaction("collect_14", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("X23");
    ns_web_url("X23",
        "URL=https://www.directv.com/xapi/beamlocalchannellookupms/v1/channels/dtvchannels/zipcode/75001/623",
        "METHOD=GET",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://data.directv.com/_/service_worker/67r0/sw_iframe.html?origin=https%3A%2F%2Fwww.directv.com&1p=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("X23", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("na_json_3");
    ns_web_url("na_json_3",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_3_main_101_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.directv.com/dtvassets/gtm/gagtm/global/eventlistener.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://assets.tvscipixel.com/tvscientific-pix-o-0c44d34e-b041-4043-bc16-9e9ef6a0b167.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://tags.tiqcdn.com/libs/tealiumjs/latest/tealium_collect.min.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://apps.rokt.com/store/js/gtm_wrapper_init.min.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://znbx3lsjyv0b2ukcw-dtvresearch.siteintercept.qualtrics.com/SIE/?Q_ZID=ZN_bx3LsjYv0B2uKCW","METHOD=GET","HEADER=If-None-Match:W/\"29bc-/L0M92wWhr7AVcecnRLTRXPOARM\"","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.mczbf.com/tags/418102726794/tag.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://live.rezync.com/sync?c=16b6410431b6374e780104abb0443ca8&p=3d0bf54d505a5303e71151b032c00f3e&k=directvcom-pixel-8695&custom1=238753378&zmpID=directv-com&categoryID=,&productID=,&cache_buster=1785923177020&page_referrer=&PageUrl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://sierra.chat/agent/4QpFj40BkclJ60wBkcnYOoWQDHuAyiA1DPD6MLm-wkY/custom","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://beacon.lynx.cognitivlabs.com/pixel/capture?tags=009c0f0c-b368-479d-b373-081480b06a9c&referer=&page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&event=pageview","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/favicon.ico","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=direc000;cat=direc0;rcb=14;ord=1;num=4639183384005;npa=0;auiddc=1143583505.1785923160;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=KJA;gtm=45fe6831v9172137160z8848825936za200zb869119018zd848825936xea;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("na_json_3", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_15");
    ns_web_url("collect_15",
        "URL=https://www.google.com/ccm/collect?rcb=14&frm=0&apvc=0&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&tid=DC-12050451&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&gtm=45fe6831v9172137160za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802&tft=1785923177089&tfd=3838&tids=DC-12050451&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_15", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_11");
    ns_web_url("index_11",
        "URL=https://www.googleadservices.com/pagead/conversion/10837652692/?random=1785923177115&cv=11&fst=1785923177115&fmt=7&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&bttype=purchase&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oid=263663542.1785923177&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=2~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Attribution-Reporting-Eligible:not-navigation-source;event-source, trigger",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Attribution-Reporting-Support:web",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_11", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_12");
    ns_web_url("index_12",
        "URL=https://www.googleadservices.com/pagead/conversion/10837652692/?random=1785923177132&cv=11&fst=1785923177132&fmt=7&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&bttype=purchase&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oid=450297181.1785923177&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=3~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Attribution-Reporting-Eligible:trigger;navigation-source",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Attribution-Reporting-Support:not-os, web",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1785923177137&cv=11&fst=1785923177137&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.googleadservices.com/ccm/conversion/10837652692/?random=1785923177115&cv=11&fst=1785923177115&fmt=3&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&bttype=purchase&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oid=263663542.1785923177&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=2~0~0~0&em=tv.1&emd=tvd.1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("index_12", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_13");
    ns_web_url("index_13",
        "URL=https://www.google.com/rmkt/collect/10837652692/?random=1785923177137&cv=11&fst=1785923177137&fmt=8&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_13", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_16");
    ns_web_url("collect_16",
        "URL=https://www.google.com/ccm/collect?rcb=17&frm=0&apvc=0&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&tid=AW-10837652692&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&tft=1785923177147&tfd=3897&tids=AW-10837652692&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.googleadservices.com/ccm/conversion/10837652692/?random=1785923177132&cv=11&fst=1785923177132&fmt=3&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&bttype=purchase&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oid=450297181.1785923177&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=3~0~0~0&em=tv.1&emd=tvd.1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=COzZxqSaiZYDFZzwOAYd8UMGBA;src=12050451;type=direc000;cat=direc0;rcb=14;ord=1;num=4639183384005;npa=0;auiddc=1143583505.1785923160;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=KJA;gtm=45fe6831v9172137160z8848825936za200zb869119018zd848825936xea;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=3&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&en=scroll_depth_10%25&gap.sstd=5&ep.querystring=%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fpackages%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923176%24j44%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=1872660163444-1785923177185&epn.timestamp=1785923177184&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_10%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=513&tfd=3948&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=direc005;cat=dv3600;rcb=14;ord=4220325502161;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;src=12050451;type=strea0;cat=strea016;rcb=14;ord=1;num=4898671736980;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1785923177262&cv=11&fst=1785923177262&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("collect_16", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_14");
    ns_web_url("index_14",
        "URL=https://www.google.com/rmkt/collect/10837652692/?random=1785923177262&cv=11&fst=1785923177262&fmt=8&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_14", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("X0837652692_2");
    ns_web_url("X0837652692_2",
        "URL=https://www.google.com/ccm/form-data/10837652692?gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&rcb=17&did=dYmQxMT&gdid=dYmQxMT&npa=0&frm=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=c&em=tv.1&emd=tvd.1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1785923177277&cv=11&fst=1785923177277&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("X0837652692_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_15");
    ns_web_url("index_15",
        "URL=https://www.google.com/rmkt/collect/10837652692/?random=1785923177277&cv=11&fst=1785923177277&fmt=8&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_15", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_17");
    ns_web_url("collect_17",
        "URL=https://www.google.com/ccm/collect?rcb=17&frm=0&apvc=0&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&tid=AW-10837652692&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&ep.enable_event_matching_conversions=false&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&tft=1785923177287&tfd=4037&tids=AW-10837652692&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("collect_17", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_18");
    ns_web_url("collect_18",
        "URL=https://www.google.com/ccm/collect?rcb=17&frm=0&apvc=0&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&tid=AW-10837652692&en=searchpv&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&tft=1785923177288&tfd=4037&tids=AW-10837652692&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://trkn.us/pixel/conv/ppt=21080;g=landing_pages;gid=49355?_rnd=0.21098078816312094","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://c.amazon-adsystem.com/aat/amzn.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/up_loader.1.1.0.js","METHOD=GET","HEADER=If-None-Match:W/\"f69b7952630809d94e309043fa13c1a8\"","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=If-Modified-Since:Sun, 02 Aug 2026 12:07:03 GMT","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/tag_path/profile/visit/js/1_0?dtm_cid=82607&dtm_cmagic=ec8194&dtm_fid=101&dtmc_tms=1&dtm_promo_id=1&cachebuster=0692987134882304&dtmc_loc=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/container/19536;124481;13503;iframe/?ft_referrer=https%3A//www.directv.com/packages/%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b%3F~&ns=&cb=394248.98427625844","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://servedby.flashtalking.com/container/25776;130445;14358;iframe/?ft_referrer=https%3A//www.directv.com/packages/%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b%3F~&ns=&cb=852108.3038298966","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CNPYz6SaiZYDFQzZOAYdR3EX4w;src=12050451;type=direc005;cat=dv3600;rcb=14;ord=4220325502161;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://use.fontawesome.com/7f85a56ba4.css","METHOD=GET","HEADER=If-None-Match:W/\"8360eb270b919a1fb4776bc448d9ed14\"","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=If-Modified-Since:Fri, 22 Sep 2023 00:57:51 GMT","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:style","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("collect_18", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("data_2");
    ns_web_url("data_2",
        "URL=https://sdk.iad-05.braze.com/api/v3/data/",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=X-Braze-Req-Tokens-Remaining:29",
        "HEADER=X-Braze-Last-Req-Ms-Ago:10993",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=X-Braze-Req-Attempt:1",
        "HEADER=X-Braze-Api-Key:795e2050-a249-4266-b25b-b6882659271a",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_data_2_main_112_0.json",
        BODY_END
    );
    ns_end_transaction("data_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_13");
    ns_web_url("jsEvent_json_13",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_13_main_113_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117215459~117215459~117549813~117549813~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=f15s0t1&_tu=BA&gap.sstd=5&aip=1&z=1361716962","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/16624272110/?random=1785923177370&cv=11&fst=1785923177370&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=4","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("jsEvent_json_13", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_16");
    ns_web_url("index_16",
        "URL=https://www.google.com/rmkt/collect/16624272110/?random=1785923177370&cv=11&fst=1785923177370&fmt=8&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=68&gcp=5",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_16", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_17");
    ns_web_url("index_17",
        "URL=https://www.googleadservices.com/pagead/conversion/16624272110/?random=1785923177384&cv=11&fst=1785923177384&fmt=7&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&oid=0692987134882304&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=4~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Attribution-Reporting-Eligible:not-event-source, trigger",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Attribution-Reporting-Support:not-os, web",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_17", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("collect_19");
    ns_web_url("collect_19",
        "URL=https://www.google.com/ccm/collect?rcb=14&frm=0&apvc=0&auid=1143583505.1785923160&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&tid=AW-16624272110&en=page_view&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&scrsrc=www.googletagmanager.com&rnd=82263237.1785923176&navt=n&npa=0&ep.enable_event_matching_conversions=false&did=dYmQxMT&gdid=dYmQxMT&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&tft=1785923177389&tfd=4139&tids=AW-16624272110&fmt=8",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://12050451.fls.doubleclick.net/activityi;dc_pre=CITL06SaiZYDFYGmYwYd4S8b9A;src=12050451;type=strea0;cat=strea016;rcb=14;ord=1;num=4898671736980;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://analytics-sm.com/?bid=95d08be5-94db-4701-810b-6a3bafe321a3&smuid=1785923445898&bt=1785923177466&btz=300&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&url_path=%2Fpackages%2F&title=DIRECTV%20Streaming%20Live%20TV%20Plans","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://connect.facebook.net/signals/config/1990543777800675?v=2.9.370&r=stable&domain=www.directv.com&hme=589ca7d2e122c6385be4e33d0bc38dace8e88b62db3f4bee0e6f01d386858e70&ex_m=108%2C210%2C160%2C22%2C73%2C74%2C151%2C69%2C68%2C11%2C169%2C93%2C16%2C143%2C131%2C39%2C76%2C81%2C139%2C165%2C171%2C26%2C27%2C28%2C30%2C48%2C152%2C78%2C116%2C18%2C20%2C44%2C40%2C42%2C41%2C86%2C95%2C99%2C114%2C150%2C153%2C46%2C115%2C24%2C21%2C123%2C70%2C36%2C155%2C154%2C156%2C147%2C145%2C25%2C35%2C59%2C113%2C167%2C71%2C17%2C158%2C118%2C84%2C67%2C19%2C88%2C89%2C120%2C87%2C141%2C140%2C144%2C100%2C166%2C34%2C49%2C117%2C47%2C8%2C4%2C5%2C7%2C6%2C3%2C94%2C105%2C172%2C177%2C224%2C75%2C237%2C236%2C235%2C23%2C33%2C55%2C107%2C61%2C10%2C64%2C101%2C102%2C103%2C109%2C134%2C31%2C29%2C136%2C137%2C138%2C133%2C132%2C161%2C77%2C164%2C162%2C163%2C50%2C60%2C127%2C15%2C168%2C45%2C281%2C282%2C280%2C295%2C313%2C217%2C206%2C62%2C207%2C205%2C316%2C307%2C52%2C218%2C111%2C135%2C83%2C125%2C54%2C124%2C130%2C129%2C58%2C65%2C63%2C157%2C79%2C80%2C119%2C37%2C32%2C53%2C56%2C104%2C170%2C1%2C128%2C14%2C126%2C12%2C2%2C57%2C96%2C66%2C122%2C92%2C91%2C173%2C174%2C97%2C98%2C9%2C106%2C51%2C148%2C90%2C82%2C72%2C121%2C110%2C43%2C149%2C0%2C85%2C142%2C146%2C159%2C38%2C112%2C13%2C175","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/djirwi3xij/web/8176850_Tangerine%20Card_Saquon_Hoop_DSK.jpg?noretina=true","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("collect_19", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("config_2");
    ns_web_url("config_2",
        "URL=https://pixel-config.reddit.com/pixels/t2_5iplaapd/config",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://alb.reddit.com/rp.gif?ts=1785923177617&id=t2_5iplaapd&event=PageVisit&m.itemCount=&m.value=&m.valueDecimal=&m.currency=&m.transactionId=&m.customEventName=&m.products=&m.conversionId=&uuid=a6d5b647-c78c-403f-98cc-752458aec5f6&aaid=&external_id=&idfa=&integration=reddit&partner=TEALIUM&partner_version=&opt_out=0&sh=1897&sw=1108&v=rdt_b6dc0919&dpm=&dpcc=&dprc=&esurl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F&db=tsc-0.isc-0.pp-0.fetch-1.mo-1.iframe-0.ww-0.qsa-1.srv_cfg-0.src_pid-0","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://alb.reddit.com/rp.gif?ts=1785923177621&id=t2_5iplaapd&event=PageVisit&m.itemCount=&m.value=&m.valueDecimal=&m.currency=&m.transactionId=&m.customEventName=&m.products=&m.conversionId=&uuid=a6d5b647-c78c-403f-98cc-752458aec5f6&aaid=&external_id=&idfa=&integration=reddit&partner=TEALIUM&partner_version=&opt_out=0&sh=1897&sw=1108&v=rdt_b6dc0919&dpm=&dpcc=&dprc=&esurl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F&db=tsc-0.srv_cfg-0.src_pid-0","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/xooshlgrcv/web/7757250-TangerineCard-Gemini-DSK.png?noretina=true","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/assets/content/aojoivyzga/web/6735753-Content-Card-v2.png?position=c&color=ffffffff&quality=80&u=pw0kir?imwidth=900","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("config_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("originId_2");
    ns_web_url("originId_2",
        "URL=https://cloud3.zineone.com/c3/api/v1/originId?originId=a91bfb00-2015-49fb-9925-8463d125a32a&profileId=b18130f7-c32c-4684-b705-a5fced49d989",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_originId_2_main_118_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://trkn.us/pixel/conv/ppt=21080;g=landing_pages;gid=49355?_rnd=0.21098078816312094;ip=61.12.67.22;cuidchk=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.3c5b736e.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("originId_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("i_gif");
    ns_web_url("i_gif",
        "URL=https://collect.tealiumiq.com/directv/main/2/i.gif",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:multipart/form-data; boundary=----WebKitFormBoundarySo1DCIzuNfajryL0",
        "HEADER=Sec-Fetch-Mode:cors",
        MULTIPART_BODY_BEGIN,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"data\""
            BODY_BEGIN,
            "{"data":{"event":"gtm.load","gtm.uniqueEventId":118,"gtm.start":1785923175356,"cp.pageSessionId":"c048471a-e460-4ca7-8c61-d2fcff2607b5","cp.QUARK":"FALSE","cp.CIP":"61.12.67.22","cp.AB_IDPROOT":"new_idproot_20190410","cp.IDPROOT-TEST":"AB-IDPROOT-New","cp.DCPAPP":"upperfunnel","cp.Sierramigration":"true","cp.currentZipcode":"75001","cp.optimizelyEndUserId":"oeu1785923160264r0.7155237830759648","cp.optimizelySession":"1785923160295","cp._ga":"GA1.1.573265066.1785923160","cp.FPLC":"i3RVi4lfhHDngzq4192ZwQw/BHM702IqDEui35C9l/mhNj7BHdi2Mz4rfu8qgHZ/Ey+ouH6VTV2+moC8yKCEZBEHhekVL8jH0ptHlyspsNSOLJy29OT2rizrMWujTA==","cp.FPGSID":"1.1785923160.1785923160.G-LEXYQWQ1NF.WjVHCjiCNikZ1GfAAFzjbA","cp.utag_main__sn":"1","cp.utag_main_ses_id":"1785923163000;exp-session","cp.dtvprodpersisted":"_83102abd194c48238c420d73eeb3c10aab4cec684176481f8caa6bb868f042f8_b3b1de73465240c2a510de9bdddb9f8b_1785923163171_9007199255772889_1785923163171_1_cade18db640e48eb8dbee93e1600898e","cp.bm_mi":"A59A357BB40381D851F768D111DFC955~YAAQ3ewsF4VsGKWfAQAAc9lQ0QAoFB8NRsPVkiNOvB57iiHpaqBouqUc/zqiZO6lleVCywHZhUjlEvxjK+ZqK68RUd8yameagiXyRKhZpKfAenhkDZZ9QBK9bKgX/0s8g00k8OfLdjOaLYOP7qRa4qZ9X3dp/LHTS8jvNzDzZj8B538A3Olb8qFeFnUn7CVa1Is6A6ANK1ljFmPM/+m1pKR2vuOMhwNe1uiKZo5n56FOcMhhhdsERH9pqZkcIMYuF/47altLxgy9FBAlJDSXI8Xk7HJ3Yozh1XzMQHQDD22JsqOOxNnoyBQESCJ1IkOShES2IPeGeoObqOUW6VcmtoH+kzcPkW79kqCJ~1","cp.utag_main__ss":"0;exp-session","cp.user_id":"GA1.1.573265066.1785923160","cp.ab.storage.userId.795e2050-a249-4266-b25b-b6882659271a":"g:573265066.1785923160|e:undefined|c:1785923166349|l:1785923166351","cp.ab.storage.deviceId.795e2050-a249-4266-b25b-b6882659271a":"g:a724d15a-5361-4f71-9188-f666359f7f75|e:undefined|c:1785923166353|l:1785923166353","cp.AWSALB":"hfAjAoVsq1jbmWtmybBylEQbVyNtf+5iTtd3vNL926OjJnu+wg3gZbzXn1VRUxddJ/BIoInkb+bGGua2Gbf5V00ZMp7vO7ASRcXL4gWzV7msiy2KJkrlJhtd8vuB","cp.AWSALBCORS":"hfAjAoVsq1jbmWtmybBylEQbVyNtf+5iTtd3vNL926OjJnu+wg3gZbzXn1VRUxddJ/BIoInkb+bGGua2Gbf5V00ZMp7vO7ASRcXL4gWzV7msiy2KJkrlJhtd8vuB","cp._fbp":"fb.1.1785923167203.448590667205825087.Bg","cp.sm_uuid":"1785923445898","cp.OTGPPConsent":"DBABLA~BAAAAAAAAABY.QA","cp.QuantumMetricSessionID":"15ee8da754a44c11862cb214234d6b3a","cp.QuantumMetricUserID":"9167a4fbe5361e1b0380a9b8187f5641","cp._pin_unauth":"dWlkPVlXVXhPR1V5Tm1JdE1UTTNPQzAwTkRZMkxUZ3dORE10WlRGaE5UY3hPR1ExWldOaQ","cp._uetsid":"7c332aa090b211f1ad457f22becda171|19ue5gt|2|g8c|0|2408","cp._uetvid":"7c335d2090b211f1a50405c34706bf16|1v8lqvo|1785923169699|1|1|bat.bing.com/p/insights/c/y","cp.OptanonConsent":"isGpcEnabled=0&datestamp=Wed+Aug+05+2026+04:46:13+GMT-0500+(Central+Daylight+Time)&version=202606.1.0&browserGpcFlag=0&isDntEnabled=0&isIABGlobal=false&identifierType=BAN+(Billing+Account+Number)&hosts=&consentId=6ed9665f-2e70-47dd-b27b-2b6f4c7ac821&interactionCount=1&isAnonUser=1&prevHadToken=0&landingPath=https://www.directv.com/sports/college-sports/&GPPCookiesCount=1&gppSid=7&groups=C0012:1,C0004:1,C0002:1,C0003:1,C0001:1,C1003:1&crTime=1785923173250","cp.invoca_session":"{\"ttl\":\"2026-09-04T09:46:14.444Z\",\"session\":{\"invoca_id\":\"i-58d5d2bd-b007-41f3-8554-0521e0f98980\",\"returnVisitorFlag\":\"No\"},\"config\":{\"ce\":true,\"fv\":false,\"rn\":false}}","cp.Genesysmigration":"true","cp.akaas_DCPLIVE":"1788515174~rv=54~id=201cfa8d77ba01529d69bb368dbac201~rn=genesys1","cp.bm_sz":"85E85E8CFC5E455C10C4164E83445261~YAAQ3ewsFz5tGKWfAQAATgJR0QDG0n5z63XhJpffexQQY+7YcKoduWy+cJ8+gGbKwW1kDVB3oNwmdeH8+dOTWO9LYQPBX6VZVocDcn4r+nBOevpiVG1afAofD0yt/JOCbtuLpDqTv01GPY0hucdOJuFoEbFliNwrCG76sfv6u5pCIIowSJOojGkLOyf1Iecdz8aSi92wBJ3UmUBFUZMpkYrP3U1j41/alfYOpEsJJnc7rss+JvccOFJrDGmzySeiLX3jPOjedAzM5SXCJZhbu0vD0mCoHhY9HLTsPUlM7u8VcQx/CUZ7G3v/gaAEMYH5UNjUbVNeQ3mnapn1PQUwvtrjSOuldpTeCmOa0zZH2czmzjLgmc30MLWBn7EATgR4W4SVwTI0tAnKrXbtl9/17uJ8wEe9WKC3H4KedhH27PKV~3622451~3621446","cp._abck":"E53B15511AE8027B6F3E5C08AABA9C31~0~YAAQ3ewsF0JtGKWfAQAAyQJR0RDLnnIXvQp9VN2Cfp8FVA0cO0Chy7x2hlY98Ey2pXptw4aRKsEXekZqt4imw+M0Q7hD7qySLYuV0N/Kmk/aR6LIAaN+NDV9nLcBRRwKwlTBGKcGBWk3wtvdn7GGo+mT9wtBuslALtAOIPlbErRa5aysFkTsBobs7M81HQKtTXJ5jrWWcajIe8ZzPgr45v5bQJgW15DmrBK3wRmpuPNQhllSO2Brc9Q0IV4gdqvBoEyOm3y6uVxNdLJrrpX6j2QSiIK8NP5It7vbr/raQuWdEWBOQ+ohBJ1Bk8lbsOewmfaxu2O4VIkEuWYj5yIP/65uL+Mth1akimjXy2hUjpXH7jA+wWIghtjU8pnS2/kcAAV9lzKfQfvhgt+kiHzj9e+aRraTxZUTvSJj9P2hSsYUHoWgMky3R46PxwLyVfatULKFqLIOzHyJs38373b1+Es/rahMhpj6qrVUcPMwL8CK0FwJvBQ+cLOEv2frX3D8Tih2gVoW4vdTYmRzNLPsYfckRc/46FnhjIclNV2Wo94mU5AqvDQSDVMtwTxFzkdDvX/rdz9m8WArpardZczVRpLwHdOJ10NT2jPdNrYT6kjSq3TKV2O+T0qW/QD0E378QxjBxMGCaNSp/JSQkGJLJ6iNj5CmhR1lW3LhPFyRNtI=~-1~-1~1785926759~AAQAAAAG//////ENsOr0qD7k3bFUpDa2YglBJQYkRsWTQ4IUFmu2RdNwz2qRKWL9fva3qo6JSpDXTgoXcI1AEGqBrdmi3xZ9Lh2+3j1sM6Z3LwTq~-1","cp.userVisitCount":"4","cp.utag_main__pn":"3;exp-session","cp.utag_main__se":"6;exp-session","cp.utag_main__st":"1785924976475;exp-session","cp.pzn1":"mpg19","cp._gcl_au":"1.1.1143583505.1785923160.-.-.1785923177.422465542.1785923177.1785923177","cp._ga_LEXYQWQ1NF":"GS2.1.s1785923160$o1$g1$t1785923177$j43$l0$h666784750","cp.dtvprodsession":"9007199255772889_1785923176499_1785923163171_5185_cade18db640e48eb8dbee93e1600898e","cp.ab.storage.sessionId.795e2050-a249-4266-b25b-b6882659271a":"g:57a5e2d2-91bd-43f6-a928-c24566661c92|e:1785924977345|c:1785923166350|l:1785923177345","cp._rdt_uuid":"1785923167709.a6d5b647-c78c-403f-98cc-752458aec5f6","cp.bm_sv":"599E92A48522E90AD2A38081363180C6~YAAQ1uwsF3dxn66fAQAApAxR0QAx8qxZE8T4eC5wLwUKsOQbaKltQnf1gm2xu2aKMxtnasL7Cctn39BAEB3Df8FjEyTVOvD3/ITdZu6hSkCPJGhhNG9HC5+0Nlg5fYG9FDljr/2kgh57HH40usXM5EmLEsblkfnoRGLGRsyQG6bpg0Gmfu1sUVdhUK/vY7a4u2Fk9a9x0YZE3YSahFlRLM0hs5o2pnYlPJ2CE6/Ul3Vp3/RRKyllKTUZJsgXmZkkfCjm4aTRHQsIMQ==~1","tealium_session_event_number":1,"tealium_session_number":1,"tealium_session_id":"1785923177657","tealium_visitor_id":"119fd1510cb67938556404759148566547515d5bbd","dom.referrer":"","dom.title":"DIRECTV Streaming Live TV Plans","dom.domain":"www.directv.com","dom.query_string":"dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","dom.hash":"","dom.url":"https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","dom.pathname":"/packages/","dom.viewport_height":980,"dom.viewport_width":1897,"qp.dtvprodCd":"5185-9845b5bd75c3479d9d65bffffd6b518b","meta.viewport":"initial-scale=1.0, width=device-width, user-scalable=yes, maximum-scale=5.0","meta.facebook-domain-verification":"mrk8uqwlmh6i2xh1o5s3eo0u84exem","meta.keywords":"channel lineup, channel list, channel packages, compare, compare channel packages, compare channels, compare packages, compare tv packages, cost, directv packages, how much is, international packages, internet, internet packages, no contract, packages, packages and prices, plans, premium packages, price, prices, satellite, service, signature, signature packages, stream packages, streaming packages, television packages, tv channel packages, tv package, tv packages, tv packages and prices, tv plan, tv plans, via internet","meta.description":"DIRECTV streaming TV plans. Choose a streaming plan to watch live TV, sports, news, entertainment & more with on-demand movies, TV shows, cloud DVR w/unlimited recordings and popular streaming apps!","meta.robots":"INDEX,FOLLOW","meta.og:title":"DIRECTV Streaming Live TV Plans","meta.og:url":"https://www.directv.com/packages/  ","meta.og:image":"https://www.directv.com/dtvassets/logos/DIRECTV-1200x628.png","meta.og:type":"website","meta.og:site_name":"DIRECTV","meta.og:description":"DIRECTV streaming TV plans. Choose a streaming plan to watch live TV, sports, news, entertainment & more with on-demand movies, TV shows, cloud DVR w/unlimited recordings and popular streaming apps!","meta.twitter:description":"DIRECTV streaming TV plans. Choose a streaming plan to watch live TV, sports, news, entertainment & more with on-demand movies, TV shows, cloud DVR w/unlimited recordings and popular streaming apps!","meta.twitter:creator":"@DIRECTV","meta.twitter:site":"@DIRECTV","meta.twitter:url":"https://www.directv.com/packages/","meta.twitter:title":"DIRECTV Streaming Live TV Plans","meta.twitter:image":"https://www.directv.com/dtvassets/logos/DIRECTV-1200x1200.png","meta.twitter:card":"summary","meta.emotion-insertion-point":"","tealium_cookie_domain":"directv.com","tealium_domain":"directv.com","tealium_event":"gtm.load","tealium_account":"directv","tealium_profile":"main","tealium_environment":"prod","tealium_datasource":"z5h7nh","tealium_random":"3184524332454628","tealium_library_name":"tealium.js","tealium_library_version":"5.0.7","tealium_timestamp_epoch":1785923177,"tealium_timestamp_utc":"2026-08-05T09:46:17.690Z","tealium_timestamp_local":"2026-08-05T04:46:17.690"}}",
            BODY_END,
        MULTIPART_BODY_END,
        INLINE_URLS,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/881.65c406596abf35768129.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=www.directv.com","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:multipart/form-data; boundary=----WebKitFormBoundary19fd1525c72",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/963.c66321cb3f9f4543e3c6.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=www.directv.com","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://apps.rokt-api.com/js/v2/us2-6e2266ef6b87e44a90069be92e0b1320/app.js?env=0","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("i_gif", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_18");
    ns_web_url("index_18",
        "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=668087215&cv=11&fst=1785923177115&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=2~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxC-ImEIfAdPi1XYLWoMxdkol1Xk72yYc89YUWhe7kAPdg02nZkdWFr78d_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECSitub3QtbmF2aWdhdGlvbi1zb3VyY2U7ZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=ChDs370t2Ym-Laanvi2DsL4t&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnsn9RwzvtDpyfAGgGrXSlNP9yC8Dy1aVSA&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrsbE_rYyguPMqH-G5gvM-lvK5UzhP5jIp4WrV30BHu_wgNjK6MNMIxoC4qo&pscrd=IhMI_KXIpJqJlgMVveSEAB2I8jHHOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzZWVTQkNXaXZLSWZSQk1vM3MzekYyczNkaUJZYXFESjAteFE2aXpSVUsyQlc4dVI5bWtMTXoMCAliCAgAEAAYACAA",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("index_18", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_19");
    ns_web_url("index_19",
        "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/10837652692/?random=1448004316&cv=11&fst=1785923177132&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=3~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxF_Kb0LJ5GlnAyo1B1EcsdUhzuStwK4b-QBIonSjUuR--YJF9W89_mvJh_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShl0cmlnZ2VyO25hdmlnYXRpb24tc291cmNlWgMKAQFiAwoBAw&cerd=Cgzr370tp6e-LYOwvi0&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnngB4O79jQFJuXR_ZxSp-tuyR0ZIg7T-fQ&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrn2n9zFtcQ1rX75YXYJNISziiV907DcnXJPoilaWPlSYOZlhrahgqxoCZj0&pscrd=IhMI6LHIpJqJlgMVIdqEAB1R8x1aOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzU2hCRF9mZ3hCZnpHZi1Ba2RKd0tnU09uU0dJMUJTTzI4b3p0Ump4SGU2dnRyci1kMGFnMHoMCAliCAgAEAAYACAA",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.google.com/pagead/1p-user-list/10837652692/?random=1785923177137&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgc0nMMXhs4iJn2WTPxqJiwA0sVmIlCB0aLlbQOx9Zm1t4WEM2e3ChM-w_rpSCe5ioijTT0KBeQiyz8OlRUVQg6ZbXDOjczOHc0Grm0dapkM5FARNKIQ6gFAJdPdhTn2LCRn8onASKsWFdKqFzv_62sBMvRJnrj-Ykmp-jvTTvvXONZIRV_Ak50nl3CE3YM6kwzAkea7mbtkWigfbzeD-ToioKPZyCN8Q5ueI5FR2I26IpjSiBDOrgVI4YObjjBKl_PqAu1BtiUsW_0h-9GAe&random=2721065813&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/10837652692/?random=1785923177137&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgc0nMMXhs4iJn2WTPxqJiwA0sVmIlCB0aLlbQOx9Zm1t4WEM2e3ChM-w_rpSCe5ioijTT0KBeQiyz8OlRUVQg6ZbXDOjczOHc0Grm0dapkM5FARNKIQ6gFAJdPdhTn2LCRn8onASKsWFdKqFzv_62sBMvRJnrj-Ykmp-jvTTvvXONZIRV_Ak50nl3CE3YM6kwzAkea7mbtkWigfbzeD-ToioKPZyCN8Q5ueI5FR2I26IpjSiBDOrgVI4YObjjBKl_PqAu1BtiUsW_0h-9GAe&random=2721065813&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117549813~117549813~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=f15s0t10&_tu=BA&gap.sstd=5&aip=1&z=437700130","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=13829452258215285102;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlQQG5QVsfsjnbWxTxkgdv2te3wxqVHvhIOCQw;_dc_time=1785923177;dc_pre=COzZxqSaiZYDFZzwOAYd8UMGBA;src=12050451;type=direc000;cat=direc0;rcb=14;ord=1;num=4639183384005;npa=0;auiddc=1143583505.1785923160;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=KJA;gtm=45fe6831v9172137160z8848825936za200zb869119018zd848825936xea;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("index_19", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("events_4");
    ns_web_url("events_4",
        "URL=https://logx.optimizely.com/v1/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_events_4_main_122_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://bat.bing.com/p/insights/t/138003007","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=138003007&Ver=2&mid=dc04b552-1d21-459d-9bf5-29e9acab82b7&bo=1&sid=7c332aa090b211f1ad457f22becda171&vid=7c335d2090b211f1a50405c34706bf16&vids=0&msclkid=N&pi=918639831&lg=en-US&sw=1897&sh=1108&sc=24&tl=DIRECTV%20Streaming%20Live%20TV%20Plans&kw=channel%20lineup,%20channel%20list,%20channel%20packages,%20compare,%20compare%20channel%20packages,%20compare%20channels,%20compare%20packages,%20compare%20tv%20packages,%20cost,%20directv%20packages,%20how%20much%20is,%20international%20packages,%20internet,%20internet%20packages,%20no%20contract,%20packages,%20packages%20and%20prices,%20plans,%20premium%20packages,%20price,%20prices,%20satellite,%20service,%20signature,%20signature%20packages,%20stream%20packages,%20streaming%20packages,%20television%20packages,%20tv%20channel%20packages,%20tv%20package,%20tv%20packages,%20tv%20packages%20and%20prices,%20tv%20plan,%20tv%20plans,%20via%20internet&p=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&r=&lt=3704&evt=pageLoad&sv=2&cdb=AQwR&rn=93102","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://c.amazon-adsystem.com/aat/amzn.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=16585938712715468746;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlRIC2AmbBrHecPoqcZx6xlj7289qOgDzVSTYQ;_dc_time=1785923177;dc_pre=CNPYz6SaiZYDFQzZOAYdR3EX4w;src=12050451;type=direc005;cat=dv3600;rcb=14;ord=4220325502161;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=IFA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/gmp/conversion/_dc_unique_id=554137914059074727;_dc_ptd=ChEI8L7L0wYQmuOgyNHJwJjUARIfANDROlT1wldX_RU74Hcy-njR9a5KoynyCmifIuLdRQ;_dc_time=1785923177;dc_pre=CITL06SaiZYDFYGmYwYd4S8b9A;src=12050451;type=strea0;cat=strea016;rcb=14;ord=1;num=4898671736980;npa=0;auiddc=1143583505.1785923160;gdid=dYmQxMT;uaa=x86;uab=64;uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0;uamb=0;uam=;uap=Linux;uapv=6.8.0;uaw=0;pscdl=noapi;frm=0;_tu=AJA;gtm=45fe6831v9172137160za200zb869119018zd848825936xec;gcd=13l3l3l3l1l1;dma=0;dc_fmt=1;tag_exp=115938465~115938469~117227716~118131808~118395334~118897920~118897930~119896802;epver=2;~oref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b?","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=4&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&en=view_item_list&gap.sstd=5&ep.querystring=%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.hit_type=ecommerce_event&ep.querystring_extension=&ep.gtm_debug=view_item_list&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fpackages%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923177%24j43%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=74989948880-1785923177855&epn.timestamp=1785923177854&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=view_item_list&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&ep.gtm_container_version=2665&ep.gtm_container_id=GTM-PJR2VDH&ep.gtm_env=Live&_et=664&ep.user_data._tag_mode=AUTO&tfd=4621&richsstsse","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/10837652692/?random=1785923177262&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgRywRAlwjwr7MfNaW0bexClih1jGI6oGaHGsEBeduxaw3O3j6TnvutN3BeZhdpcXvilQmg2FLLQD7Rw_ugRn-bkqYnHzDewDnfZqdhNsSn6_W63A32ui-YF40vOY4LV598_yPDLUQcJ-8vCJcjXkYaS445lCAAdEOHWxya3DZCewOLqNMe8AhFiYhJlKg8zCKUsea99SsUkFShD3iDj1SZw6JKBtQqQZQuag3uWQjB1f_SchI9wLynq7Dx7_puhR0u8fAf9hGRfJcf5Nb8Ia&random=3236059314&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/10837652692/?random=1785923177262&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgRywRAlwjwr7MfNaW0bexClih1jGI6oGaHGsEBeduxaw3O3j6TnvutN3BeZhdpcXvilQmg2FLLQD7Rw_ugRn-bkqYnHzDewDnfZqdhNsSn6_W63A32ui-YF40vOY4LV598_yPDLUQcJ-8vCJcjXkYaS445lCAAdEOHWxya3DZCewOLqNMe8AhFiYhJlKg8zCKUsea99SsUkFShD3iDj1SZw6JKBtQqQZQuag3uWQjB1f_SchI9wLynq7Dx7_puhR0u8fAf9hGRfJcf5Nb8Ia&random=3236059314&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/10837652692/?random=1785923177277&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgdoHZAVWZZ4yJfvBzZipGaxL8XQ58GG52sNmP-eaP-SMzh-9kF6mr2jdY9AVxOTsHPMORQTxp3nYGvTseJR_G7pvDdmfKsQCdwbyFcMLpjMoEvBQn9UKLdLf9txnEzuLwc1TCBi-oxADbHM7mGvAZ57O945kgnUE_Au4KSrxIP7tssUU2BrspiB8cypJkpwrnU7M61p8-HTfVTH1D0BDY5yNvOokdTKCZ3ayb7Q-IUH8fhZjpTP3yL5rGBIWhiuXhaMk_zuLU4Fld75rQMfT&random=3534563670&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/10837652692/?random=1785923177277&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=searchpv&gtm=45be6831v889747108za200zb869119018zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dsearchpv&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgdoHZAVWZZ4yJfvBzZipGaxL8XQ58GG52sNmP-eaP-SMzh-9kF6mr2jdY9AVxOTsHPMORQTxp3nYGvTseJR_G7pvDdmfKsQCdwbyFcMLpjMoEvBQn9UKLdLf9txnEzuLwc1TCBi-oxADbHM7mGvAZ57O945kgnUE_Au4KSrxIP7tssUU2BrspiB8cypJkpwrnU7M61p8-HTfVTH1D0BDY5yNvOokdTKCZ3ayb7Q-IUH8fhZjpTP3yL5rGBIWhiuXhaMk_zuLU4Fld75rQMfT&random=3534563670&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/segment/2/read/a;;pixel/?s=13503&d=www.directv.com&r=packages/","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/spot/8/25776;153951;14358/?ft_referrer=https%3A//www.directv.com/packages/%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b%3F~&ns=&cb=852108.3038298966","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://servedby.flashtalking.com/segment/2/read/a;;pixel/?s=14358&d=www.directv.com&r=packages/","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-conversion/10837652692/?random=1448004316&cv=11&fst=1785923177132&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=3~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxF_Kb0LJ5GlnAyo1B1EcsdUhzuStwK4b-QBIonSjUuR--YJF9W89_mvJh_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShl0cmlnZ2VyO25hdmlnYXRpb24tc291cmNlWgMKAQFiAwoBAw&cerd=Cgzr370tp6e-LYOwvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrn2n9zFtcQ1rX75YXYJNISziiV907DcnXJPoilaWPlSYOZlhrahgqxoCZj0&pscrd=IhMI6LHIpJqJlgMVIdqEAB1R8x1aOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzU2hCRF9mZ3hCZnpHZi1Ba2RKd0tnU09uU0dJMUJTTzI4b3p0Ump4SGU2dnRyci1kMGFnMHoMCAliCAgAEAAYACAA&is_vtc=1&cid=CAQS0wEAEQoqgTgU1p9UeoeolT29EhNCGJyIFB2grxBwn3fQ08dEdozxq0Vp14PHBUyU3IyWynX2ea27vN37EmJPe89mrghT2n0AuGNWU1sduBJQcCDmZaE62DP9er6PQqicd7K40YWJYNgHt_TkN1QSo1dqD4hpQfn-yL7ffIeSZREs7SqeZ8uM3upY17nGjKbSQtNClbgeE6rdl6bStYy76WwGfdfEY0TROZDRZ_xLOGIVGwfHvmmovVyfROwqwt8ElC3a13VEMFvop81_glI5dW5Ay1pK&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnmIUmGDi2vMjBMZPSkjIerktDP_XCS1T_g&random=446881160","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-conversion/10837652692/?random=668087215&cv=11&fst=1785923177115&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=2~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxC-ImEIfAdPi1XYLWoMxdkol1Xk72yYc89YUWhe7kAPdg02nZkdWFr78d_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECSitub3QtbmF2aWdhdGlvbi1zb3VyY2U7ZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=ChDs370t2Ym-Laanvi2DsL4t&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrsbE_rYyguPMqH-G5gvM-lvK5UzhP5jIp4WrV30BHu_wgNjK6MNMIxoC4qo&pscrd=IhMI_KXIpJqJlgMVveSEAB2I8jHHOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzZWVTQkNXaXZLSWZSQk1vM3MzekYyczNkaUJZYXFESjAteFE2aXpSVUsyQlc4dVI5bWtMTXoMCAliCAgAEAAYACAA&is_vtc=1&cid=CAQS0wEAEQoqgW7PDxAqRgTtaJof8hhAHDXq5aSp9jHUMlUHjYnU1O4xg5uDTOaLu52FO7DI2uzMPvoNov3c2hYgYPJVYgiNtMRltgF7S0l5OSO7MRc94mxParI8baBXfm56sqkeZxJMz24LU431DFAeeWuiJAd7kieyD65q-ClJhD0U1Yjn461yEAv09jCmsby_AxTUPOjYxe-_lnm_1x6Vjwaj9OixIRtuVyxnkeO8iv0lOYJjH752XbxIKebq4GvTE9jtYVdbltARae29y_DwJbts0xbo&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnqPDVBlYHETp9vB7i6jhRBgy4YHhWoHeYg&random=3890325241","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("events_4", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_20");
    ns_web_url("index_20",
        "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/16624272110/?random=235452252&cv=11&fst=1785923177384&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=4~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxNWbx9dfEJTLSVC-t0BW2mbhQ9QttFhgqX7LLh1UTNCg7GRYTjjX8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShlub3QtZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzr370tpqe-LYOwvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrhArDBGAiSM21F19VBztM5bPFsRHCT9Rmwrrt_0dDLiUoCyNZNOBkhoCqjU&pscrd=IhMI2JvYpJqJlgMVfOiEAB02bBI6OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1eHB1R2o3MWVkSFdSOEhVaVdVVEUzcHlUUDJzQlNNNDVIbE1BVG5WR0dNeGozaGpCYTBzWXoMCAliCAgAEAAYACAA",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors",
        INLINE_URLS,
            "URL=https://www.google.com/pagead/1p-user-list/16624272110/?random=1785923177370&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgSevQU97SJ5PHBGSNYELG9-50SlHUTy_2x_FsWLW2pE5DLYaq3RAPn-F7S4Q_wD818tFCZymI6tUPeqI_6p1AVf0z4hQEEHU1PCb-Q43GsmPqGQE9pcM0QMN98_EEAdeeFwHkzdfogIwVXM05e9NfaUAsaff_ayEVVb3Euo5XyuRys4V0MOZLD2IQiPoVoxREEeOs6zgDRoSxf4FWY5h6ot0w_LwQPB5n60crep5z0DeUI7pH1f1drVDqUYBJpM5vFsoIpKBYKesqJd9ssEd&random=86812070&rmt_tld=0&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/16624272110/?random=1785923177370&cv=11&fst=1785920400000&bg=ffffff&guid=ON&async=1&en=gtag.config&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&data=event%3Dgtag.config%3Benable_event_matching_conversions%3Dfalse&ept=9&rfmt=3&fmt=3&is_vtc=1&cid=CAQS0wEAEQoqgSevQU97SJ5PHBGSNYELG9-50SlHUTy_2x_FsWLW2pE5DLYaq3RAPn-F7S4Q_wD818tFCZymI6tUPeqI_6p1AVf0z4hQEEHU1PCb-Q43GsmPqGQE9pcM0QMN98_EEAdeeFwHkzdfogIwVXM05e9NfaUAsaff_ayEVVb3Euo5XyuRys4V0MOZLD2IQiPoVoxREEeOs6zgDRoSxf4FWY5h6ot0w_LwQPB5n60crep5z0DeUI7pH1f1drVDqUYBJpM5vFsoIpKBYKesqJd9ssEd&random=86812070&rmt_tld=1&ipr=y","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117549813~117549813~117549814~117549814~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=f15s1t530&_tu=BA&gap.sstd=5&aip=1&z=383619561","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.com/pagead/1p-conversion/16624272110/?random=235452252&cv=11&fst=1785923177384&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=4~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxNWbx9dfEJTLSVC-t0BW2mbhQ9QttFhgqX7LLh1UTNCg7GRYTjjX8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShlub3QtZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzr370tpqe-LYOwvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrhArDBGAiSM21F19VBztM5bPFsRHCT9Rmwrrt_0dDLiUoCyNZNOBkhoCqjU&pscrd=IhMI2JvYpJqJlgMVfOiEAB02bBI6OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1eHB1R2o3MWVkSFdSOEhVaVdVVEUzcHlUUDJzQlNNNDVIbE1BVG5WR0dNeGozaGpCYTBzWXoMCAliCAgAEAAYACAA&is_vtc=1&cid=CAQS0wEAEQoqgSmh9xlIUAW_Ijbllea3I0wj-d_unidjeViKWk8D4u-ESFdvTF3PSieZk4ckRni9mRXCpWS77AzXAI8tv7tWQQdRiDPfxUHpmiHDd4TOJFKGJq75KTdP-nnNbq5fEFVblPFbRgWNzecxGBvVgotk1cJUTgEY5tp5_aomaPydaLqW7oKhqbGRVIPIsnPNLnsaQL6Dq_QN_fWvSYM_bOiYfFXWN8fasKBemO9OJ9yJTuoCMdEMvJa71-eZNsWCPfxWwu_n-4f5ZFaEMlaqj2Dw&random=3225776292","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-conversion/10837652692/?random=668087215&cv=11&fst=1785923177115&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=2~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxC-ImEIfAdPi1XYLWoMxdkol1Xk72yYc89YUWhe7kAPdg02nZkdWFr78d_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECSitub3QtbmF2aWdhdGlvbi1zb3VyY2U7ZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=ChDs370t2Ym-Laanvi2DsL4t&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrsbE_rYyguPMqH-G5gvM-lvK5UzhP5jIp4WrV30BHu_wgNjK6MNMIxoC4qo&is_vtc=1&cid=CAQS0wEAEQoqgW7PDxAqRgTtaJof8hhAHDXq5aSp9jHUMlUHjYnU1O4xg5uDTOaLu52FO7DI2uzMPvoNov3c2hYgYPJVYgiNtMRltgF7S0l5OSO7MRc94mxParI8baBXfm56sqkeZxJMz24LU431DFAeeWuiJAd7kieyD65q-ClJhD0U1Yjn461yEAv09jCmsby_AxTUPOjYxe-_lnm_1x6Vjwaj9OixIRtuVyxnkeO8iv0lOYJjH752XbxIKebq4GvTE9jtYVdbltARae29y_DwJbts0xbo&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnqPDVBlYHETp9vB7i6jhRBgy4YHhWoHeYg&random=3890325241&ipr=y&pscrd=IhMI_KXIpJqJlgMVveSEAB2I8jHHOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzZWVTQkNXaXZLSWZSQk1vM3MzekYyczNkaUJZYXFESjAteFE2aXpSVUsyQlc4dVI5bWtMTXoMCAliCAgAEAAYACAAggEJcAGIAQHiAQEC","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-conversion/10837652692/?random=1448004316&cv=11&fst=1785923177132&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v889747108z8848825936za200zb869119018zd848825936xea&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=17&label=FvOtCKeSkv0YENTp5a8o&capi=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&value=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&ec_mode=a&oidsrc=3&ecsid2=422465542.1785923177&_tu=CBA&gcl_ctr=3~0~0~0&category=acrcp_v1_512&em=tv.1&emd=tvd.1&ept=5&ct_cookie_present=false&eoid=CkQKEQjwvsvTBhDY6o-b8fXQ88oBEi8ABi5dxF_Kb0LJ5GlnAyo1B1EcsdUhzuStwK4b-QBIonSjUuR--YJF9W89_mvJh_D_BwE&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShl0cmlnZ2VyO25hdmlnYXRpb24tc291cmNlWgMKAQFiAwoBAw&cerd=Cgzr370tp6e-LYOwvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrn2n9zFtcQ1rX75YXYJNISziiV907DcnXJPoilaWPlSYOZlhrahgqxoCZj0&is_vtc=1&cid=CAQS0wEAEQoqgTgU1p9UeoeolT29EhNCGJyIFB2grxBwn3fQ08dEdozxq0Vp14PHBUyU3IyWynX2ea27vN37EmJPe89mrghT2n0AuGNWU1sduBJQcCDmZaE62DP9er6PQqicd7K40YWJYNgHt_TkN1QSo1dqD4hpQfn-yL7ffIeSZREs7SqeZ8uM3upY17nGjKbSQtNClbgeE6rdl6bStYy76WwGfdfEY0TROZDRZ_xLOGIVGwfHvmmovVyfROwqwt8ElC3a13VEMFvop81_glI5dW5Ay1pK&eitems=ChAI8L7L0wYQ8beSi4er04AbEh0ABNiEnmIUmGDi2vMjBMZPSkjIerktDP_XCS1T_g&random=446881160&ipr=y&pscrd=IhMI6LHIpJqJlgMVIdqEAB1R8x1aOhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUlzU2hCRF9mZ3hCZnpHZi1Ba2RKd0tnU09uU0dJMUJTTzI4b3p0Ump4SGU2dnRyci1kMGFnMHoMCAliCAgAEAAYACAAggEJcAGIAQHiAQEC","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("index_20", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("allowlist_json_2");
    ns_web_url("allowlist_json_2",
        "URL=https://c.amazon-adsystem.com/aat/allowlist/allowlist.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&ref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=p1khwya&cookie_sync=1&upv=3.0.0&upid=edw9roa&ref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("allowlist_json_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_21");
    ns_web_url("index_21",
        "URL=https://ct.pinterest.com/user/?tid=2612953088789&ov=%7B%22page_name%22%3A%22DIRECTV%20Streaming%20Live%20TV%20Plans%22%2C%22page_category%22%3A%22%22%7D&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22632590e2e28a3faaf57aed70e37380254fbf4a75d4f3fa5c5a4f2b2017013261%22%5D%2C%22np%22%3A%22tealium%22%2C%22pin_unauth%22%3A%22dWlkPVlXVXhPR1V5Tm1JdE1UTTNPQzAwTkRZMkxUZ3dORE10WlRGaE5UY3hPR1ExWldOaQ%22%7D&cb=1785923178164&dep=2%2CPAGE_LOAD",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_21", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("index_22");
    ns_web_url("index_22",
        "URL=https://ct.pinterest.com/user/?event=PageVisit&ed=%7B%22event_id%22%3A%220692987134882304%22%7D&tid=2612953088789&cb=1785923178165&dep=5%2CEVENT_TAGS_ABSENT",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("index_22", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("Targeting_php_2");
    ns_web_url("Targeting_php_2",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Targeting.php?Q_ZoneID=ZN_bx3LsjYv0B2uKCW&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web",
        "METHOD=POST",
        "HEADER=Content-Type:application/x-www-form-urlencoded ",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "Q_LOC=https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b&xmdRetryCount=0&hasAnalyticsConsent=null&Timestamp=2026-08-05T09:46:18.170Z",
        BODY_END
    );
    ns_end_transaction("Targeting_php_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("pageInfo");
    ns_web_url("pageInfo",
        "URL=https://www.mczbf.com/418102726794/pageInfo",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://www.google.co.in/pagead/1p-conversion/16624272110/?random=235452252&cv=11&fst=1785923177384&fmt=8&bg=ffffff&guid=ON&async=1&en=conversion&gtm=45be6831v9188567129za200zb848825936zd848825936xec&gcd=13l3l3l3l1l1&dma=0&tag_exp=115938465~115938468~117227716~118131808~118897920~118897930~119896803&u_w=1897&u_h=1108&url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&rcb=14&label=az3eCN7I1L0ZEO6Fifc9&capi=1&gtm_ee=1&frm=0&tiba=DIRECTV%20Streaming%20Live%20TV%20Plans&did=dYmQxMT&gdid=dYmQxMT&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1143583505.1785923160&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uamb=0&uam=&uap=Linux&uapv=6.8.0&uaw=0&gcl_ctr=4~0~0~0&data=event%3Dconversion&category=acrcp_v1_512&ept=5&ct_cookie_present=false&eoid=CkAKEQjwvsvTBhDY6o-b8fXQ88oBEisABi5dxNWbx9dfEJTLSVC-t0BW2mbhQ9QttFhgqX7LLh1UTNCg7GRYTjjX8P8HAQ&crd=CLTesQII8t-xAgit4bECCK_hsQIIobixAgixwbECCLDBsQIIscOxAgiKxbECCMLJsQII1-ixAgi0xrECCJPasQII29yxAgiH27ECCNPFsQII68yxAgjtzrECCNXPsQII9NqxAgjJ47ECCJfUsQIIyduxAgjN5rECCLHhsQIIs-GxAgim3bECCLDesQIIgNuxAgjL4bECShlub3QtZXZlbnQtc291cmNlLCB0cmlnZ2VyWgMKAQFiAwoBAw&cerd=Cgzr370tpqe-LYOwvi0&fsk=ChAI8L7L0wYQ5aD_j4rtyJgsEiwA6CShrhArDBGAiSM21F19VBztM5bPFsRHCT9Rmwrrt_0dDLiUoCyNZNOBkhoCqjU&is_vtc=1&cid=CAQS0wEAEQoqgSmh9xlIUAW_Ijbllea3I0wj-d_unidjeViKWk8D4u-ESFdvTF3PSieZk4ckRni9mRXCpWS77AzXAI8tv7tWQQdRiDPfxUHpmiHDd4TOJFKGJq75KTdP-nnNbq5fEFVblPFbRgWNzecxGBvVgotk1cJUTgEY5tp5_aomaPydaLqW7oKhqbGRVIPIsnPNLnsaQL6Dq_QN_fWvSYM_bOiYfFXWN8fasKBemO9OJ9yJTuoCMdEMvJa71-eZNsWCPfxWwu_n-4f5ZFaEMlaqj2Dw&random=3225776292&ipr=y&pscrd=IhMI2JvYpJqJlgMVfOiEAB02bBI6OhhodHRwczovL3d3dy5kaXJlY3R2LmNvbS9CV0NoRUk4TDdMMHdZUXJjV3VscW5rMDhMYkFSSXNBTDNueUl1eHB1R2o3MWVkSFdSOEhVaVdVVEUzcHlUUDJzQlNNNDVIbE1BVG5WR0dNeGozaGpCYTBzWXoMCAliCAgAEAAYACAAggEFcAGIAQE","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.facebook.com/tr/","METHOD=POST","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Content-Type:application/x-www-form-urlencoded","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://match.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&ref=https%3a%2f%2fwww.directv.com&redirect=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate","HEADER=Content-Type:application/x-www-form-urlencoded ",END_INLINE,
            "URL=https://match.adsrvr.org/track/cei?advertiser_id=p1khwya&cookie_sync=1&upv=3.0.0&upid=edw9roa&ref=https%3a%2f%2fwww.directv.com&redirect=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE,
            "URL=https://ct.pinterest.com/v3/?tid=2612953088789&ov=%7B%22page_name%22%3A%22DIRECTV%20Streaming%20Live%20TV%20Plans%22%2C%22page_category%22%3A%22%22%7D&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22632590e2e28a3faaf57aed70e37380254fbf4a75d4f3fa5c5a4f2b2017013261%22%5D%2C%22np%22%3A%22tealium%22%2C%22pin_unauth%22%3A%22dWlkPVlXVXhPR1V5Tm1JdE1UTTNPQzAwTkRZMkxUZ3dORE10WlRGaE5UY3hPR1ExWldOaQ%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b%22%2C%22ref%22%3A%22%22%2C%22if%22%3Afalse%2C%22sh%22%3A1108%2C%22sw%22%3A1897%2C%22mh%22%3A%223c5b736e%22%2C%22is_eu%22%3Afalse%2C%22epikDataSource%22%3Anull%2C%22derivedEpikDataSource%22%3Anull%2C%22unauthIdDataSource%22%3A%22fpc%22%2C%22architecture%22%3A%22x86%22%2C%22bitness%22%3A%2264%22%2C%22brands%22%3A%5B%7B%22brand%22%3A%22Chromium%22%2C%22version%22%3A%22135%22%7D%2C%7B%22brand%22%3A%22Not-A.Brand%22%2C%22version%22%3A%228%22%7D%5D%2C%22mobile%22%3Afalse%2C%22model%22%3A%22%22%2C%22platform%22%3A%22Linux%22%2C%22platformVersion%22%3A%226.8.0%22%2C%22uaFullVersion%22%3A%22135.0.7049.52%22%7D&cb=1785923178286","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://cdn.boomtrain.com/p13n/directv-com/p13n.min.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://insight.adsrvr.org/track/cei?advertiser_id=102rt04&cookie_sync=1&upv=3.0.0&upid=s0e7skb&ref=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b","METHOD=GET",END_INLINE
    );
    ns_end_transaction("pageInfo", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_14");
    ns_web_url("jsEvent_json_14",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_14_main_129_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_14", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("identify");
    ns_web_url("identify",
        "URL=https://apps.rokt-api.com/identity/v1/identify",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=x-mp-key:us2-6e2266ef6b87e44a90069be92e0b1320",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_identify_main_130_0.json",
        BODY_END
    );
    ns_end_transaction("identify", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("events_5");
    ns_web_url("events_5",
        "URL=https://sierra.chat/-/api/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_events_5_main_131_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://sierra.chat/-/cdn/Y38tJejIGFbmunRhtm4OPskLrro.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6830v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117549813~117549813~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=f14s3t1204&_tu=BA&gap.sstd=5&aip=1&z=401017557","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET","HEADER=If-None-Match:\"3c2902a9e6adcb33745963459cecb356\"","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=If-Modified-Since:Sun, 02 Aug 2026 12:07:04 GMT","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:same-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://bat.bing.com/p/insights/s/0.8.69","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/1ryKg6_jUh__CwYAHozGm_wnMbU.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/d5YlBEDJGN5D0KtFJNhao6-oXQ4.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/qJ31DbE1i-CmsuHNdCXw5ujIgB8.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/iNlO2fAGjwqMWKn8-EXRlVwXkfI.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/XgamTLmuiYUXbrHkrGHWrNL_VV0.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/vTdX1QjKeysMCr9tesws_OBh0S4.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/Dv4tu_7JDZOFiuSGzuyT2NXolXY.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/CoreModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("events_5", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("resolve");
    ns_web_url("resolve",
        "URL=https://people.api.zetaglobal.net/identify/resolve?data=eyJjb29raWUiOnsiYnNpbiI6IiJ9LCJxdWVyeXN0cmluZyI6e30sImV4dGVybmFsX2lkcyI6eyJ6eW5jIjoiMTE5YjliMDEtMDQ1ZS00YWU2LWIzMzQtMjEwY2Y1ZjY0YzBiOjE3ODU5MjMxNzcuNjQ3NDg0In19&site_id=directv-com",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://js.adsrvr.org/universal_pixel.js","METHOD=GET",END_INLINE,
            "URL=https://ct.pinterest.com/static/ct/token_create.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://ct.pinterest.com/ct.html","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Upgrade-Insecure-Requests:1","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:iframe","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:navigate",END_INLINE
    );
    ns_end_transaction("resolve", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("na_json_4");
    ns_web_url("na_json_4",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_4_main_133_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://ct.pinterest.com/v3/?event=PageVisit&ed=%7B%22event_id%22%3A%220692987134882304%22%7D&tid=2612953088789&cb=1785923178505&dep=5%2CEVENT_TAGS_ABSENT&pd=%7B%22opt_out_type%22%3A%22%22%2C%22st%22%3A%22%22%2C%22country%22%3A%22%22%2C%22external_id%22%3A%5B%22632590e2e28a3faaf57aed70e37380254fbf4a75d4f3fa5c5a4f2b2017013261%22%5D%2C%22np%22%3A%22tealium%22%2C%22pin_unauth%22%3A%22dWlkPVlXVXhPR1V5Tm1JdE1UTTNPQzAwTkRZMkxUZ3dORE10WlRGaE5UY3hPR1ExWldOaQ%22%7D&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b%22%2C%22ref%22%3A%22%22%2C%22if%22%3Afalse%2C%22sh%22%3A1108%2C%22sw%22%3A1897%2C%22mh%22%3A%223c5b736e%22%2C%22is_eu%22%3Afalse%2C%22is_restricted_region%22%3Afalse%2C%22epikDataSource%22%3Anull%2C%22derivedEpikDataSource%22%3Anull%2C%22unauthIdDataSource%22%3A%22fpc%22%2C%22architecture%22%3A%22x86%22%2C%22bitness%22%3A%2264%22%2C%22brands%22%3A%5B%7B%22brand%22%3A%22Chromium%22%2C%22version%22%3A%22135%22%7D%2C%7B%22brand%22%3A%22Not-A.Brand%22%2C%22version%22%3A%228%22%7D%5D%2C%22mobile%22%3Afalse%2C%22model%22%3A%22%22%2C%22platform%22%3A%22Linux%22%2C%22platformVersion%22%3A%226.8.0%22%2C%22uaFullVersion%22%3A%22135.0.7049.52%22%7D","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/147.0090a6fba15eaae458a6.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/85.dfe3f3bafcad8b65e5e9.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/EmbeddedTargetModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/WebResponsiveDialogModule.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("na_json_4", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("Asset_php_5");
    ns_web_url("Asset_php_5",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=SI_6JdNpLb7pIW0B3U&Version=6&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php_5", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("Asset_php_6");
    ns_web_url("Asset_php_6",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=CR_3OT4dZ6SVd5KdQq&Version=1&Q_InterceptID=SI_6JdNpLb7pIW0B3U&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php_6", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("Asset_php_7");
    ns_web_url("Asset_php_7",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=SI_djbXWUSXzUcsPaF&Version=5&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("Asset_php_7", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("Asset_php_8");
    ns_web_url("Asset_php_8",
        "URL=https://siteintercept.qualtrics.com/WRSiteInterceptEngine/Asset.php?Module=CR_30vrVXmB0AHZTkq&Version=4&Q_InterceptID=SI_djbXWUSXzUcsPaF&Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BrandTier=&Q_ARCACHEVERSION=21&Q_BRANDDC=pdx1",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=5&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&en=scroll_depth_25%25&gap.sstd=5&ep.querystring=%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.hit_type=scroll_event&ep.querystring_extension=&ep.gtm_debug=gtm.scrollDepth_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fpackages%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923177%24j43%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=6705450007168-1785923178552&epn.timestamp=1785923178550&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=&ep.event_name_ss=scroll_depth_25%25&ep.event_name=configuration&ep.braze_ext_id=573265066.1785923160&ep.subscriberType=&_et=687&tfd=5317&richsstsse","METHOD=GET","HEADER=X-Effective-Origin:https://www.directv.com","HEADER=X-Effective-Referer:https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","HEADER=Attribution-Reporting-Eligible:trigger=navigation-source, not-event-source","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/agent/4QpFj40BkclJ60wBkcnYOoWQDHuAyiA1DPD6MLm-wkY/embed-css","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:style","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/129.fe865cd4ba5b51cf9432.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/305.d4dcba7e4049e6a7e76a.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/948.d6b81f4d8748fbbef855.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/994.53653390ff50e4841591.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://siteintercept.qualtrics.com/dxjsmodule/179.1c20a30d47822898af46.chunk.js?Q_CLIENTVERSION=2.54.0&Q_CLIENTTYPE=web&Q_BRANDID=dtvresearch","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://beacon.lynx.cognitivlabs.com/pixel/capture?tags=009c0f0c-b368-479d-b373-081480b06a9c&referer=&page_url=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&event=pageview&rf=1","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/87797.6ccf23103e2d4244.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.directv.com/uf/_next/static/chunks/89699.51a39b72a5d7a009.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/otSDKStub.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://cdn.quantummetric.com/qscripts/quantum-dtv.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("Asset_php_8", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("y_5");
    ns_web_url("y_5",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_5_main_138_0.text",
        BODY_END
    );
    ns_end_transaction("y_5", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("c37345a0_f820_4777_9d9d_dfc3_2");
    ns_web_url("c37345a0_f820_4777_9d9d_dfc3_2",
        "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/c37345a0-f820-4777-9d9d-dfc31170677a.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("c37345a0_f820_4777_9d9d_dfc3_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("location_2");
    ns_web_url("location_2",
        "URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("location_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("d_2");
    ns_web_url("d_2",
        "URL=https://ingest.quantummetric.com/horizon/d",
        "METHOD=HEAD",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("d_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("event_2");
    ns_web_url("event_2",
        "URL=https://cloud3.zineone.com/c3/api/v1/event",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_event_2_main_142_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/otBannerSdk.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("event_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("realtimeconversion_3");
    ns_web_url("realtimeconversion_3",
        "URL=https://insight.adsrvr.org/track/realtimeconversion",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=eventDataSource:JsSdk",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=eventDataSourceVersion:3.0.5",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_realtimeconversion_3_main_143_0.json",
        BODY_END
    );
    ns_end_transaction("realtimeconversion_3", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("en_json_2");
    ns_web_url("en_json_2",
        "URL=https://cdn.cookielaw.org/consent/c37345a0-f820-4777-9d9d-dfc31170677a/019efa33-0ce9-76ab-aa9e-dbf168a2bf82/en.json",
        "METHOD=GET",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        INLINE_URLS,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/otGPP.js","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("en_json_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_15");
    ns_web_url("jsEvent_json_15",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_15_main_145_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://cdn.cookielaw.org/scripttemplates/202606.1.0/assets/otCommonStyles.css","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6831h2v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117215454~117215454~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=2088553043","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("jsEvent_json_15", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("realtimeconversion_4");
    ns_web_url("realtimeconversion_4",
        "URL=https://insight.adsrvr.org/track/realtimeconversion",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Content-type:application/json",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=eventDataSource:JsSdk",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=eventDataSourceVersion:3.0.5",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_realtimeconversion_4_main_146_0.json",
        BODY_END
    );
    ns_end_transaction("realtimeconversion_4", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("track");
    ns_web_url("track",
        "URL=https://events.api.boomtrain.com/event/track",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_track_main_147_0.text",
        BODY_END
    );
    ns_end_transaction("track", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_13");
    ns_web_url("dtv_13",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923178315&s=15ee8da754a44c11862cb214234d6b3a&U=9167a4fbe5361e1b0380a9b8187f5641&Q=1&Y=1&X=7382e84bbb1e4a5fb08d06aa37335c16&S=0&b=411254&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_13_main_148_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_13", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_14");
    ns_web_url("dtv_14",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923178343&s=15ee8da754a44c11862cb214234d6b3a&U=9167a4fbe5361e1b0380a9b8187f5641&P=0&N=0&S=0&b=1246&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_14_main_149_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://tvspix.com/t.png?&t=1785923179372&l=tvscientific-pix-o-0c44d34e-b041-4043-bc16-9e9ef6a0b167&u3=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&u11=tvspix-v2&eid=336566ea-aa0b-4154-b0ca-bcbc5b2377be","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=6&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&en=z1_analytic_capture&gap.sstd=5&ep.querystring=%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&ep.authenticated_ind=unauthenticated&ep.recognized_ind=unrecognized&ep.page_service_type=other&ep.page_language=english&ep.page_url=%2Fpackages%2F&ep.hit_type=custom_event&ep.querystring_extension=&ep.gtm_debug=z1_analytic_capture_&ep.qm_replay=https%3A%2F%2Fdtv.quantummetric.com%2F%23%2Fusers%2Fsearch%3Fqmsessioncookie%3D15ee8da754a44c11862cb214234d6b3a&ep.page=%2Fpackages%2F&ep.hitTraceId=GA1.1.573265066.1785923160%7CGS2.1.s1785923160%24o1%24g1%24t1785923178%24j42%24l0%24h666784750&ep.content_group=Sales&ep.MarTechHitTraceId=98481993753-1785923179323&epn.timestamp=1785923179321&ep.user_pseudo_id=GA1.1.573265066.1785923160&ep.content_subgroup=Shop&ep.browser_user_agent=Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F135.0.0.0%20Safari%2F537.36&epn.browser_user_agent_characterCount=101&ep.purchase_buyerIntent=OTFS&ep.event_name_ss=z1_analytic_capture&ep.event_name=z1_analytic_capture&ep.braze_ext_id=573265066.1785923160&ep.dim_name=eppLabel&ep.dim_value=OTFS&ep.subscriberType=&_et=761&tfd=6090&richsstsse","METHOD=GET","HEADER=X-Effective-Origin:https://www.directv.com","HEADER=X-Effective-Referer:https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b","HEADER=Attribution-Reporting-Eligible:trigger, not-navigation-source;event-source","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://sierra.chat/-/cdn/FpL-JUm6ifbsCEmLMj-shkLEVcU.js","METHOD=GET","HEADER=Origin:https://www.directv.com","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:cors",END_INLINE,
            "URL=https://apps.rokt.com/sync?redir=https%3A%2F%2Fcookiesync.us2.mparticle.com%2Fv1%2Fsync%3Fesid%3D13431%26MPID%3D8427438627078788923%26ID%3D%24%7BRoktRecogniser%7D%26Key%3Dus2-6e2266ef6b87e44a90069be92e0b1320%26env%3D2","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("dtv_14", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("graphql_2");
    ns_web_url("graphql_2",
        "URL=https://sierra.chat/-/api/graphql",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_graphql_2_main_150_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://cookiesync.us2.mparticle.com/v1/sync?esid=13431&MPID=8427438627078788923&ID=acdc2519-8970-4442-9133-2a2744917e4c&Key=us2-6e2266ef6b87e44a90069be92e0b1320&env=2","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE
    );
    ns_end_transaction("graphql_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("event_3");
    ns_web_url("event_3",
        "URL=https://cloud3.zineone.com/c3/api/v1/event",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=apikey:cloud3@f259e6b6-692e-4da3-a5c9-d4abcdda5b5fZ11777582274462901317",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_event_3_main_151_0.text",
        BODY_END
    );
    ns_end_transaction("event_3", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_15");
    ns_web_url("dtv_15",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923178772&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&U=9167a4fbe5361e1b0380a9b8187f5641&N=0&Q=2&S=0&b=1160&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_15_main_152_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_15", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_16");
    ns_web_url("dtv_16",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923178772&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&P=1&N=1&S=0&b=2268&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_16_main_153_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_16", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_16");
    ns_web_url("jsEvent_json_16",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_16_main_154_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6831h2v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=1978761867","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://data.directv.com/_/service_worker/67r0/sw.js?origin=https%3A%2F%2Fwww.directv.com","METHOD=GET","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:serviceworker","HEADER=Service-Worker:script","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:same-origin",END_INLINE
    );
    ns_end_transaction("jsEvent_json_16", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("hash_check_2");
    ns_web_url("hash_check_2",
        "URL=https://ingest.quantummetric.com/resource-loader/dtv/hash-check",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:deflate",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_hash_check_2_main_155_0.json",
        BODY_END
    );
    ns_end_transaction("hash_check_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_17");
    ns_web_url("jsEvent_json_17",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_17_main_156_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_17", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("y_6");
    ns_web_url("y_6",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_6_main_157_0.text",
        BODY_END
    );
    ns_end_transaction("y_6", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_17");
    ns_web_url("dtv_17",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923181844&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&P=2&N=2&S=2268&b=19041&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_17_main_158_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_17", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_18");
    ns_web_url("dtv_18",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923181844&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&N=1&Q=2&S=1160&b=183&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_18_main_159_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_18", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("na_json_5");
    ns_web_url("na_json_5",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_5_main_160_0.text",
        BODY_END
    );
    ns_end_transaction("na_json_5", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("jsEvent_json_18");
    ns_web_url("jsEvent_json_18",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_18_main_161_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_18", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("y_7");
    ns_web_url("y_7",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_7_main_162_0.text",
        BODY_END
    );
    ns_end_transaction("y_7", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_19");
    ns_web_url("dtv_19",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923185348&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&P=3&N=3&S=21309&b=4452&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_19_main_163_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_19", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("dtv_20");
    ns_web_url("dtv_20",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923185348&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&N=2&Q=2&S=1343&b=68&z=1",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_20_main_164_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_20", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("na_json_6");
    ns_web_url("na_json_6",
        "URL=https://pnapi.invoca.net/2074/na.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_na_json_6_main_165_0.text",
        BODY_END
    );
    ns_end_transaction("na_json_6", NS_AUTO_STATUS);
    ns_page_think_time(0.808);
    ns_start_transaction("entertainment_package_2");
    ns_web_url("entertainment_package_2",
        "URL=https://www.directv.com/shop/build/configure/entertainment-package?flowType=streaming&intent=device",
        "METHOD=GET",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:navigate"
    );
    ns_end_transaction("entertainment_package_2", NS_AUTO_STATUS);
    ns_page_think_time(0.057);
    ns_start_transaction("entertainment_package");
    ns_web_url("entertainment_package",
        "URL=https://apps.rokt-api.com/webevents/v3/JS/us2-6e2266ef6b87e44a90069be92e0b1320/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=utf-8",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("entertainment_package", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("tr_2");
    ns_web_url("tr_2",
        "URL=https://www.facebook.com/tr/",
        "METHOD=POST",
        "HEADER=Origin:https://www.directv.com",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:iframe",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Mode:navigate"
    );
    ns_end_transaction("tr_2", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("jsEvent_json_19");
    ns_web_url("jsEvent_json_19",
        "URL=https://celebrus.directv.com/5185/9007199257544197/js/events/v10/jsEvent.json",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Encoding:gzip",
        "HEADER=Sec-Fetch-Site:same-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_jsEvent_json_19_main_169_0.text",
        BODY_END
    );
    ns_end_transaction("jsEvent_json_19", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("collect_20");
    ns_web_url("collect_20",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=7&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&tfd=14904&richsstsse",
        "METHOD=POST",
        "HEADER=X-Effective-Origin:https://www.directv.com",
        "HEADER=X-Effective-Referer:https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b",
        "HEADER=Attribution-Reporting-Eligible:trigger",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_20_main_170_0.text",
        BODY_END
    );
    ns_end_transaction("collect_20", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("collect_21");
    ns_web_url("collect_21",
        "URL=https://data.directv.com/g/collect?v=2&tid=G-LEXYQWQ1NF&gtm=45je6831v869119018z8848825936za20gzb848825936zd848825936&_p=1785923175356&gcd=13l3l3l3l1l1&npa=0&dma=0&gdid=dYmQxMT.dYWJhMj&ecid=666784750&_eu=EAAAAGQ&are=1&cid=573265066.1785923160&ec_mode=c&frm=0&ir=1&pscdl=noapi&rcb=4&sr=1897x1108&uaa=x86&uab=64&uafvl=Chromium%3B135.0.7049.52%7CNot-A.Brand%3B8.0.0.0&uam=&uamb=0&uap=Linux&uapv=6.8.0&uaw=0&ul=en-us&ur=IN-UP&sst.etld=google.co.in&sst.tft=1785923175356&sst.lpc=148060194&sst.navt=n&sst.ude=1&sst.sw_exp=1&gaf=2&_s=8&tag_exp=115938465~115938468~118897920~118897930~119527019~119896802&sid=1785923160&sct=1&seg=1&dl=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&dt=DIRECTV%20Streaming%20Live%20TV%20Plans&_tu=BA&tfd=15008&richsstsse",
        "METHOD=POST",
        "HEADER=X-Effective-Origin:https://www.directv.com",
        "HEADER=X-Effective-Referer:https://www.directv.com/packages/?dtvprodCd=5185-9845b5bd75c3479d9d65bffffd6b518b",
        "HEADER=Attribution-Reporting-Eligible:trigger, not-navigation-source=event-source",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_collect_21_main_171_0.text",
        BODY_END
    );
    ns_end_transaction("collect_21", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("inp_3");
    ns_web_url("inp_3",
        "URL=https://www.directv.com/uf/api/rum/inp/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Mode:cors"
    );
    ns_end_transaction("inp_3", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("X_2");
    ns_web_url("X_2",
        "URL=https://bat.bing.com/actionp/0?ti=138003007&Ver=2&mid=dc04b552-1d21-459d-9bf5-29e9acab82b7&bo=2&sid=7c332aa090b211f1ad457f22becda171&vid=7c335d2090b211f1a50405c34706bf16&vids=0&msclkid=N&evt=pageHide",
        "METHOD=POST",
        "HEADER=Content-Type:text/plain",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Sec-Fetch-Mode:no-cors"
    );
    ns_end_transaction("X_2", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("y_8");
    ns_web_url("y_8",
        "URL=https://bat.bing.com/p/insights/c/y",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_y_8_main_174_0.text",
        BODY_END
    );
    ns_end_transaction("y_8", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("dtv_21");
    ns_web_url("dtv_21",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923187461&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&f=1785923187461&N=3&Q=2&S=1411&b=2297&z=2",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_21_main_175_0.text",
        BODY_END
    );
    ns_end_transaction("dtv_21", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
    ns_start_transaction("dtv_22");
    ns_web_url("dtv_22",
        "URL=https://ingest.quantummetric.com/horizon/dtv?T=B&u=https%3A%2F%2Fwww.directv.com%2Fpackages%2F%3FdtvprodCd%3D5185-9845b5bd75c3479d9d65bffffd6b518b&t=1785923178139&v=1785923187462&H=6b06736a191f4fc087eebaac&s=15ee8da754a44c11862cb214234d6b3a&f=1785923187461&P=4&N=4&S=25761&b=1998&z=2",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Storage-Access:none",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Sec-Fetch-Mode:no-cors",
        BODY_BEGIN,
            "$CAVINCLUDE$=body_dtv_22_main_176_0.text",
        BODY_END
,
        INLINE_URLS,
            "URL=https://www.directv.com/favicon.ico","METHOD=GET","HEADER=sec-ch-ua:\"Chromium\";v=\"135\", \"Not-A.Brand\";v=\"8\"","HEADER=sec-ch-ua-mobile:?0","HEADER=Sec-Fetch-Site:same-origin","HEADER=Sec-Fetch-Dest:image","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors","HEADER=Content-Type:text/plain",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6831h2v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~117215459~117215459~117549814~117549814~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=667190890","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE,
            "URL=https://www.google.co.in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&dma=0&npa=0&gcd=13l3l3l3l1l1&tid=G-LEXYQWQ1NF&cid=573265066.1785923160&gtm=45j91e6831h2v869119018z8848825936z99236018967za20gzb848825936zd848825936&tag_exp=115938465~115938468~118032361~118032361~118897920~118897930~119527019~119896802&_is_sw=0&_tu=BA&gap.sstd=5&aip=1&z=1534288857","METHOD=GET","HEADER=Sec-Fetch-Storage-Access:none","HEADER=Sec-Fetch-Site:cross-site","HEADER=Sec-Fetch-Dest:empty","HEADER=Accept-Language:en-US,en;q=0.9","HEADER=Sec-Fetch-Mode:no-cors",END_INLINE
    );
    ns_end_transaction("dtv_22", NS_AUTO_STATUS);
    ns_page_think_time(3.95);
}
