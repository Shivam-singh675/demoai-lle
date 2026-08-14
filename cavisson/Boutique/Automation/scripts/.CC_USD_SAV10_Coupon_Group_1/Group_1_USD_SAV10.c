/*-----------------------------------------------------------------------------
    Name: Group_1_USD_SAV10
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 20)
    Flow details:
    Build details: 07/24/2026 10:26:25
    Modification History:
-----------------------------------------------------------------------------*/

/* Notes :
    There are few additional arguments in all click and script APIs which can be used based on the need:
    
    #NetworkIdleTimeout=<network_idle_timeout_ms>
    The network idle timeout, measured in milliseconds (ms), has a default value of 1500 ms. 
    If the onLoad event is triggered, and there is no network activity for this duration, the page will be considered as fully loaded. 
    It may be necessary to adjust this setting when the expected time gap between two calls exceeds the default value of 1500 ms.

    #PageLoadTimeout=<page_load_timeout_sec>
    This defines the maximum waiting time in seconds for a VUser (Virtual User) to wait for a page to load.
    If the page doesn't load within this duration, the page loading will be aborted, and any captured requests up to that point will be saved. 
    This feature is particularly useful when a specific page's load time exceeds the configured limit in the scenario. 
    The default value in the scenario is 60 seconds, which can be adjusted, but it will apply to all steps and pages.

    #VisualIdleTimeout=<visual_idle_timeout_ms>
    This parameter sets the visual idle timeout in milliseconds, with a default value of 1500 ms. After the network becomes idle, the VUser will wait for visual changes to stabilize.
    If there are no visual changes within this window of time after the network becomes idle, the page will be marked as visually complete. 
    This functionality proves valuable when a specific page's load time exceeds the configured limit in the scenario. 
    The default value in the scenario is 60 seconds, which can be adjusted, though it will apply to all steps and pages.

    #AuthCredential=<username>:<password>
    Provide authentication credentials in the format <username>:<password>. AuthCredential is used to supply authentication credentials for websites that require login. 
    The credentials (username and password) are passed in the first API request, either in ns_browser or ns_web_url.

    #Optional=<0 or 1>
    Optional is a flag used to prevent a specific transaction from affecting the rest of the transactions. 
    For instance, in cases involving popups, if the popup doesn't appear, the transaction could fail, disrupting the entire test. By setting Optional to 1, the test will continue even if the transaction fails.

    #heroElementID=<element id selector>
    #heroElementXPATH=<element xpath selector>	
    #heroElementXPATH1=<alternative element xpath selector>
    #heroElementCSSPATH=<csspath selector>	
    #heroElementDOMSTRING=<domstring>
    #heroElementMark=<value>
    #heroElementMeasure=<value>
    Visual progress is considered complete when the HeroElement becomes visible on the screen. Users can specify any element as the hero element using the above arguments.
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void Group_1_USD_SAV10()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
        ns_start_transaction("Home");
        ns_browser("Home"            ,
            "url=http://10.10.70.138:31456/",
            "subType=RBU",
            "Snapshot=webpage_1782745518511.png",
            "Navigation=1");
        ns_end_transaction("Home", NS_AUTO_STATUS);
        ns_page_think_time(2.710); 


        ns_start_transaction("PDP");
        ns_link("PDP"            ,
            "url=http://66.220.31.130:30741/",
            "tagName=DIV",
            "subType=RBU",
            "Snapshot=webpage_1782745520884.png",
            "xpath=//IMG[@alt=\"Product image of Watch\"]/../DIV[1]",
            "csspath=[href=\"\\/product\\/1YMWWN1N4O\"] div",
            "xpath1=HTML/BODY[1]/MAIN[1]/DIV[2]/DIV[1]/DIV[1]/SECTION[1]/UL[1]/LI[3]/A[1]/DIV[1]",
            "class=hot-product-card-img-overlay");
        ns_end_transaction("PDP", NS_AUTO_STATUS);
        ns_page_think_time(1.770); 


        ns_start_transaction("AddToCart");
        ns_link("AddToCart"            ,
            "url=http://66.220.31.130:30741/product/1YMWWN1N4O",
            "tagName=BUTTON",
            "subType=RBU",
            "Snapshot=webpage_1782745523014.png",
            "Navigation=1",
            "xpath=//BUTTON[normalize-space(text())=\"Add To Cart\"]",
            "csspath=button",
            "xpath2=HTML/BODY[1]/MAIN[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/FORM[1]/BUTTON[1]",
            "xpath1=//LABEL[normalize-space(text())=\"Select quantity\"]/../../BUTTON[1]",
            "class=cymbal-button-primary");
        ns_end_transaction("AddToCart", NS_AUTO_STATUS);
        ns_page_think_time(8.699); 


        ns_start_transaction("Entercouponcode");
        ns_edit_field("Entercouponcode"            ,
            "url=http://66.220.31.130:30741/cart",
            "value=SAV10",
            "tagName=INPUT",
            "subType=RBU",
            "Snapshot=webpage_1782745532673.png",
            "Navigation=1",
            "xpath=//INPUT[@placeholder=\"Enter coupon code\"]",
            "csspath=#coupon_code",
            "xpath2=HTML/BODY[1]/MAIN[1]/SECTION[1]/DIV[1]/DIV[2]/FORM[1]/FIELDSET[3]/DIV[1]/DIV[1]/INPUT[1]",
            "xpath1=//LABEL[normalize-space(text())=\"Have a coupon? (optional)\"]/../INPUT[1]",
            "id=coupon_code");
        ns_end_transaction("Entercouponcode", NS_AUTO_STATUS);
        ns_page_think_time(0.082); 


        ns_start_transaction("PlaceOrder");
        ns_link("PlaceOrder"            ,
            "url=http://66.220.31.130:30741/cart",
            "tagName=BUTTON",
            "subType=RBU",
            "Snapshot=webpage_1782745532755.png",
            "xpath=//BUTTON[normalize-space(text())=\"Place Order\"]",
            "csspath=[aria-label=\"Place\\ your\\ order\\ and\\ proceed\\ to\\ payment\"]",
            "xpath1=HTML/BODY[1]/MAIN[1]/SECTION[1]/DIV[1]/DIV[2]/FORM[1]/DIV[1]/DIV[1]/BUTTON[1]",
            "class=cymbal-button-primary");
        ns_end_transaction("PlaceOrder", NS_AUTO_STATUS);
        ns_page_think_time(5.977); 
}
