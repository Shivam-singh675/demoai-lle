/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 25)
    Flow details:
    Build details: 07/27/2026 03:29:00
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
        ns_start_transaction("goToStorefront");
        ns_browser("goToStorefront"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "value=http://boutique-qa.cav-test.com:31528/",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("goToStorefront", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("goToStorefront2");
        ns_browser("goToStorefront2"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "value=http://boutique-qa.cav-test.com:31528/",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("goToStorefront2", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("goToStorefront3");
        ns_browser("goToStorefront3"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "value=http://boutique-qa.cav-test.com:31528/",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("goToStorefront3", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("goToStorefront4");
        ns_browser("goToStorefront4"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "value=http://boutique-qa.cav-test.com:31528/",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("goToStorefront4", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickViewWatchDetails");
        ns_link("clickViewWatchDetails"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "tagName=A",
            "subType=RBU",
            "xpath=//a[@aria-label='View details for Watch, priced at $109.99']",
            "xpath2=/html[2]/body/main/div[2]/div/div/section/ul/li[3]/a",
            "xpath1=//A[@aria-label=\"View details for Watch, priced at $109.99\"]",
            "xpath3=html/body/main/div[2]/div/div/section/ul/li[3]/a",
            "ai_locator=View Watch Details");
        ns_end_transaction("clickViewWatchDetails", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickAddWatchToCart");
        ns_link("clickAddWatchToCart"            ,
            "url=http://boutique-qa.cav-test.com:31528/product/1YMWWN1N4O",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//button[@aria-label='Add Sunglasses to shopping cart']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Add To Cart\"][@aria-label=\"Add Watch to shopping cart\"]",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/button",
            "class=cymbal-button-primary",
            "ai_locator=Add Sunglasses Button");
        ns_end_transaction("clickAddWatchToCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickShoppingCartLink");
        ns_link("clickShoppingCartLink"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart",
            "tagName=A",
            "subType=RBU",
            "Navigation=1",
            "xpath=//a[@aria-label='View shopping cart, cart is empty']",
            "xpath2=/html[2]/body/header/nav/div/div/a",
            "xpath1=//A[@aria-label=\"View shopping cart, cart is empty\"]",
            "xpath3=html/body/header/nav/div/div/a",
            "class=cart-link",
            "ai_locator=Shopping Cart Link");
        ns_end_transaction("clickShoppingCartLink", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterCouponCode");
        ns_edit_field("enterCouponCode"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart",
            "value=SAVE10",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='coupon_code']",
            "xpath2=/html[2]/body/main/section/div/div[2]/form/fieldset[3]/div/div/input",
            "xpath1=//INPUT[@placeholder=\"Enter coupon code\"][@name=\"coupon_code\"][@aria-label=\"Optional coupon code\"]",
            "xpath3=html/body/main/section/div/div[2]/form/fieldset[3]/div/div[1]/input",
            "id=coupon_code",
            "ai_locator=Coupon Code Input");
        ns_end_transaction("enterCouponCode", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickPlaceOrderButton");
        ns_link("clickPlaceOrderButton"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//button[@aria-label='Place your order and proceed to payment']",
            "xpath2=/html[2]/body/main/section/div/div[2]/form/div/div/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Place Order\"][@aria-label=\"Place your order and proceed to payment\"]",
            "xpath3=html/body/main/section/div/div[2]/form/div/div/button",
            "class=cymbal-button-primary",
            "ai_locator=Place Order Button");
        ns_end_transaction("clickPlaceOrderButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("goBackToCart");
        ns_browser("goBackToCart"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart/checkout",
            "action=Back",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("goBackToCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterCouponCodeAgain");
        ns_edit_field("enterCouponCodeAgain"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart",
            "value=SAVE10",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='coupon_code']",
            "xpath2=/html[2]/body/main/section/div/div[2]/form/fieldset[3]/div/div/input",
            "xpath1=//INPUT[@placeholder=\"Enter coupon code\"][@name=\"coupon_code\"][@aria-label=\"Optional coupon code\"]",
            "xpath3=html/body/main/section/div/div[2]/form/fieldset[3]/div/div[1]/input",
            "id=coupon_code",
            "ai_locator=Coupon Code Input");
        ns_end_transaction("enterCouponCodeAgain", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickPlaceOrderButtonAgain");
        ns_link("clickPlaceOrderButtonAgain"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart/checkout",
            "tagName=BUTTON",
            "subType=RBU",
            "Navigation=1",
            "xpath=//button[@aria-label='Place your order and proceed to payment']",
            "xpath2=/html[2]/body/main/section/div/div[2]/form/div/div/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Place Order\"][@aria-label=\"Place your order and proceed to payment\"]",
            "xpath3=html/body/main/section/div/div[2]/form/div/div/button",
            "class=cymbal-button-primary",
            "ai_locator=Place Order Button");
        ns_end_transaction("clickPlaceOrderButtonAgain", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 
}
