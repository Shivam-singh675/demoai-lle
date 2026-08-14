/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 20)
    Flow details:
    Build details: 07/24/2026 10:27:19
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

void Flow_1()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
        ns_start_transaction("Home");
        ns_browser("Home"            ,
            "url=http://10.10.70.138:31456/",
            "subType=RBU",
            "Snapshot=webpage_1782792147447.png",
            "Navigation=1");
        ns_end_transaction("Home", NS_AUTO_STATUS);
        ns_page_think_time(35.157); 


        ns_start_transaction("PDP");
        ns_link("PDP"            ,
            "url=https://cymbal-shops.retail.cymbal.dev/",
            "tagName=DIV",
            "subType=RBU",
            "Snapshot=webpage_1782792182482.png",
            "xpath=//DIV[normalize-space(text())=\"Watch\"]/../../A[1]/DIV[1]",
            "csspath=[href=\"\\/product\\/1YMWWN1N4O\"] div",
            "xpath2=HTML/BODY[1]/MAIN[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[4]/A[1]/DIV[1]",
            "xpath1=//DIV[normalize-space(text())=\"$109.99\"]/../../A[1]/DIV[1]",
            "class=hot-product-card-img-overlay");
        ns_end_transaction("PDP", NS_AUTO_STATUS);
        ns_page_think_time(2.204); 


        ns_start_transaction("AddToCart");
        ns_link("AddToCart"            ,
            "url=https://cymbal-shops.retail.cymbal.dev/product/1YMWWN1N4O",
            "tagName=BUTTON",
            "subType=RBU",
            "Snapshot=webpage_1782792185169.png",
            "Navigation=1",
            "xpath=//BUTTON[normalize-space(text())=\"Add To Cart\"]",
            "csspath=button",
            "xpath1=HTML/BODY[1]/MAIN[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/FORM[1]/BUTTON[1]",
            "class=cymbal-button-primary");
        ns_end_transaction("AddToCart", NS_AUTO_STATUS);
        ns_page_think_time(17.693); 


        ns_start_transaction("EmptyCart");
        ns_link("EmptyCart"            ,
            "url=https://cymbal-shops.retail.cymbal.dev/cart",
            "tagName=BUTTON",
            "subType=RBU",
            "Snapshot=webpage_1782792203498.png",
            "Navigation=1",
            "xpath=//BUTTON[normalize-space(text())=\"Empty Cart\"]",
            "csspath=[action=\"\\/cart\\/empty\"] button",
            "xpath2=HTML/BODY[1]/MAIN[1]/SECTION[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/FORM[1]/BUTTON[1]",
            "xpath1=//H4[normalize-space(text())=\"Watch\"]/../../../../../DIV[1]/DIV[2]/FORM[1]/BUTTON[1]",
            "class=cymbal-button-secondary cart-summary-empty-cart-button");
        ns_end_transaction("EmptyCart", NS_AUTO_STATUS);
        ns_page_think_time(7.098); 


        ns_start_transaction("Cart");
        ns_link("Cart"            ,
            "url=https://cymbal-shops.retail.cymbal.dev/",
            "tagName=IMG",
            "subType=RBU",
            "Snapshot=webpage_1782792211275.png",
            "Navigation=1",
            "xpath=//IMG[@alt=\"Cart icon\"][@title=\"Cart\"]",
            "csspath=[title]",
            "xpath2=HTML/BODY[1]/HEADER[1]/DIV[1]/DIV[1]/DIV[1]/A[1]/IMG[1]",
            "xpath1=//SPAN[normalize-space(text())=\"$\"]/../../../A[1]/IMG[1]",
            "class=logo");
        ns_end_transaction("Cart", NS_AUTO_STATUS);
        ns_page_think_time(5.982); 


        ns_start_transaction("ContinueShopping");
        ns_link("ContinueShopping"            ,
            "url=https://cymbal-shops.retail.cymbal.dev/cart",
            "tagName=A",
            "subType=RBU",
            "Snapshot=webpage_1782792217583.png",
            "Navigation=1",
            "xpath=//A[normalize-space(text())=\"Continue Shopping\"]",
            "csspath=[role=\"button\"]",
            "xpath2=HTML/BODY[1]/MAIN[1]/SECTION[1]/A[1]",
            "xpath1=//P[normalize-space(text())=\"Items you add to your shopping cart will appear here.\"]/../A[@role=\"button\"][1]",
            "class=cymbal-button-primary");
        ns_end_transaction("ContinueShopping", NS_AUTO_STATUS);
        ns_page_think_time(2.065); 
}
