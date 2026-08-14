/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 27)
    Flow details:
    Build details: 07/30/2026 05:20:24
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
        ns_start_transaction("goToHomePage");
        ns_browser("goToHomePage"            ,
            "url=http://66.220.31.130:31528/",
            "subType=RBU",
            "Navigation=1",
            "ai_locator=Open Website");
        ns_end_transaction("goToHomePage", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickCurrencyDropdown");
        ns_link("clickCurrencyDropdown"            ,
            "url=http://66.220.31.130:31528/",
            "tagName=SELECT",
            "subType=RBU",
            "xpath=//*[@id='currency_code']",
            "xpath2=/html[2]/body/header/nav/div/div/div/div/form/select",
            "xpath1=//SELECT[@name=\"currency_code\"]",
            "xpath3=html/body/header/nav/div/div/div/div/form/select",
            "id=currency_code",
            "ai_locator=Currency Dropdown");
        ns_end_transaction("clickCurrencyDropdown", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("selectEuroCurrency");
        ns_list("selectEuroCurrency"            ,
            "url=http://66.220.31.130:31528/",
            "value=EUR",
            "tagName=SELECT",
            "subType=RBU",
            "xpath=//*[@id='currency_code']/option[normalize-space()='EUR']",
            "xpath2=/html[2]/body/header/nav/div/div/div/div/form/select/option[normalize-space()='EUR']",
            "xpath1=//SELECT[@name=\"currency_code\"]/option[normalize-space()='EUR']",
            "xpath3=html/body/header/nav/div/div/div/div/form/select/option[normalize-space()='EUR']",
            "id=currency_code",
            "ai_locator=Currency Dropdown");
        ns_end_transaction("selectEuroCurrency", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickWatchDetails");
        ns_link("clickWatchDetails"            ,
            "url=http://66.220.31.130:31528/",
            "tagName=A",
            "subType=RBU",
            "xpath=//a[@aria-label='View details for Watch, priced at $109.99']",
            "xpath2=/html[2]/body/main/div[2]/div/div/section/ul/li[3]/a",
            "xpath1=//A[@aria-label=\"View details for Watch, priced at €97.29\"]",
            "xpath3=html/body/main/div[2]/div/div/section/ul/li[3]/a",
            "ai_locator=View Watch Details");
        ns_end_transaction("clickWatchDetails", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickQuantityDropdown");
        ns_link("clickQuantityDropdown"            ,
            "url=http://66.220.31.130:31528/product/1YMWWN1N4O",
            "tagName=SELECT",
            "subType=RBU",
            "xpath=//*[@id='quantity']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/div/select",
            "xpath1=//SELECT[@name=\"quantity\"][@aria-label=\"Select quantity to add to cart\"]",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/div/select",
            "id=quantity",
            "ai_locator=Quantity Dropdown");
        ns_end_transaction("clickQuantityDropdown", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("selectQuantity2");
        ns_list("selectQuantity2"            ,
            "url=http://66.220.31.130:31528/product/1YMWWN1N4O",
            "value=2",
            "tagName=SELECT",
            "subType=RBU",
            "xpath=//*[@id='quantity']/option[normalize-space()='2']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/div/select/option[normalize-space()='2']",
            "xpath1=//SELECT[@name=\"quantity\"][@aria-label=\"Select quantity to add to cart\"]/option[normalize-space()='2']",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/div/select/option[normalize-space()='2']",
            "id=quantity",
            "ai_locator=Quantity Dropdown");
        ns_end_transaction("selectQuantity2", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickAddWatchToCartButton");
        ns_link("clickAddWatchToCartButton"            ,
            "url=http://66.220.31.130:31528/cart",
            "tagName=BUTTON",
            "subType=RBU",
            "Navigation=1",
            "xpath=//button[@aria-label='Add Sunglasses to shopping cart']",
            "xpath2=/html[2]/body/main/div/div/div[2]/div/form/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Add To Cart\"][@aria-label=\"Add Watch to shopping cart\"]",
            "xpath3=html/body/main/div[1]/div/div[2]/div/form/button",
            "class=cymbal-button-primary",
            "ai_locator=Add Sunglasses Button");
        ns_end_transaction("clickAddWatchToCartButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterSave10CouponCode");
        ns_edit_field("enterSave10CouponCode"            ,
            "url=http://66.220.31.130:31528/cart",
            "value=SAVE10",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='coupon_code']",
            "xpath2=/html[2]/body/main/section/div/div[2]/form/fieldset[3]/div/div/input",
            "xpath1=//INPUT[@placeholder=\"Enter coupon code\"][@name=\"coupon_code\"][@aria-label=\"Optional coupon code\"]",
            "xpath3=html/body/main/section/div/div[2]/form/fieldset[3]/div/div[1]/input",
            "id=coupon_code",
            "ai_locator=Coupon Code Input");
        ns_end_transaction("enterSave10CouponCode", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("submitCouponCode");
        ns_key_event("submitCouponCode"            ,
            "url=http://66.220.31.130:31528/cart?coupon_action=apply&coupon_code=SAVE10",
            "value=Enter",
            "subType=RBU",
            "Navigation=1");
        ns_end_transaction("submitCouponCode", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 
}
