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
        ns_start_transaction("goToBoutiqueHomePage");
        ns_browser("goToBoutiqueHomePage"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "subType=RBU",
            "Navigation=1",
            "ai_locator=Open Boutique QA");
        ns_end_transaction("goToBoutiqueHomePage", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickViewSunglassesDetails");
        ns_link("clickViewSunglassesDetails"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "tagName=A",
            "subType=RBU",
            "xpath=//a[@aria-label='View details for Sunglasses, priced at $19.99']",
            "xpath2=/html[2]/body/main/div[2]/div/div/section/ul/li/a",
            "xpath1=//A[@aria-label=\"View details for Sunglasses, priced at $19.99\"]",
            "xpath3=html/body/main/div[2]/div/div/section/ul/li[1]/a",
            "ai_locator=View Sunglasses Details");
        ns_end_transaction("clickViewSunglassesDetails", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickAddSunglassesToCart");
        ns_link("clickAddSunglassesToCart"            ,
            "url=http://boutique-qa.cav-test.com:31528/product/OLJCESPC7Z",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//button[@aria-label='Add Sunglasses to shopping cart']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Add To Cart\"][@aria-label=\"Add Loafers to shopping cart\"]",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/button",
            "class=cymbal-button-primary",
            "ai_locator=Add Sunglasses Button");
        ns_end_transaction("clickAddSunglassesToCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickContinueShoppingButton");
        ns_link("clickContinueShoppingButton"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart",
            "tagName=A",
            "subType=RBU",
            "xpath=//a[@aria-label='Continue shopping, return to home page']",
            "role=button",
            "xpath2=/html[2]/body/main/section/div/div/div/div[2]/form/a",
            "xpath1=//A[normalize-space(.)=\"Continue Shopping\"][@aria-label=\"Continue shopping, return to home page\"]",
            "xpath3=html/body/main/section/div/div[1]/div[1]/div[2]/form/a",
            "class=cymbal-button-primary",
            "ai_locator=Continue Shopping Button");
        ns_end_transaction("clickContinueShoppingButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickViewLoafersDetails");
        ns_link("clickViewLoafersDetails"            ,
            "url=http://boutique-qa.cav-test.com:31528/",
            "tagName=A",
            "subType=RBU",
            "xpath=//a[@aria-label='View details for Loafers, priced at $89.99']",
            "xpath2=/html[2]/body/main/div[2]/div/div/section/ul/li[4]/a",
            "xpath1=//A[@aria-label=\"View details for Loafers, priced at $89.99\"]",
            "xpath3=html/body/main/div[2]/div/div/section/ul/li[4]/a",
            "ai_locator=View Loafers Details");
        ns_end_transaction("clickViewLoafersDetails", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickAddLoafersToCart");
        ns_link("clickAddLoafersToCart"            ,
            "url=http://boutique-qa.cav-test.com:31528/product/L9ECAV7KIM",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//button[@aria-label='Add Sunglasses to shopping cart']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Add To Cart\"][@aria-label=\"Add Loafers to shopping cart\"]",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/button",
            "class=cymbal-button-primary",
            "ai_locator=Add Sunglasses Button");
        ns_end_transaction("clickAddLoafersToCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterCouponCodeSave10");
        ns_edit_field("enterCouponCodeSave10"            ,
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
        ns_end_transaction("enterCouponCodeSave10", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("pressEnterToApplyCoupon");
        ns_key_event("pressEnterToApplyCoupon"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart?coupon_action=apply&coupon_code=SAVE10",
            "value=Enter",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("pressEnterToApplyCoupon", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickEmptyCartButton");
        ns_link("clickEmptyCartButton"            ,
            "url=http://boutique-qa.cav-test.com:31528/cart?coupon_action=apply&coupon_code=SAVE10",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//button[@aria-label='Remove all items from cart']",
            "xpath2=/html[2]/body/main/section/div/div/div/div[2]/form/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Empty Cart\"][@aria-label=\"Remove all items from cart\"]",
            "xpath3=html/body/main/section/div/div[1]/div[1]/div[2]/form/button",
            "class=cymbal-button-secondary cart-summary-empty-cart-button",
            "ai_locator=Empty Cart Button");
        ns_end_transaction("clickEmptyCartButton", NS_AUTO_STATUS);
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
}
