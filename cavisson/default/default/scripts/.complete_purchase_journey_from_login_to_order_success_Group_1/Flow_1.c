/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 26)
    Flow details:
    Build details: 07/29/2026 06:18:45
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
        ns_start_transaction("openHttpsWwwSaucedemoCom");
        ns_browser("openHttpsWwwSaucedemoCom"            ,
            "url=https://www.saucedemo.com/",
            "subType=RBU",
            "Navigation=1",
            "ai_locator=SauceDemo Homepage");
        ns_end_transaction("openHttpsWwwSaucedemoCom", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterUsername");
        ns_edit_field("enterUsername"            ,
            "url=https://www.saucedemo.com/",
            "value=standard_user",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='user-name']",
            "xpath2=/html[2]/body/div/div/div[2]/div/div/div/form/div/input",
            "xpath1=//INPUT[@placeholder=\"Username\"][@name=\"user-name\"][@data-test=\"username\"]",
            "xpath3=html/body/div/div/div[2]/div[1]/div/div/form/div[1]/input",
            "id=user-name",
            "class=input_error form_input",
            "ai_locator=Username Input");
        ns_end_transaction("enterUsername", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterPassword");
        ns_edit_field("enterPassword"            ,
            "url=https://www.saucedemo.com/",
            "value=secret_sauce",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='password']",
            "xpath2=/html[2]/body/div/div/div[2]/div/div/div/form/div[2]/input",
            "xpath1=//INPUT[@placeholder=\"Password\"][@name=\"password\"][@data-test=\"password\"]",
            "xpath3=html/body/div/div/div[2]/div[1]/div/div/form/div[2]/input",
            "id=password",
            "class=input_error form_input",
            "ai_locator=Password Input");
        ns_end_transaction("enterPassword", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickLoginButton");
        ns_link("clickLoginButton"            ,
            "url=https://www.saucedemo.com/inventory.html",
            "tagName=INPUT",
            "subType=RBU",
            "Navigation=1",
            "xpath=//*[@id='login-button']",
            "xpath2=/html[2]/body/div/div/div[2]/div/div/div/form/input",
            "xpath1=//INPUT[@value=\"Login\"][@name=\"login-button\"][@data-test=\"login-button\"]",
            "xpath3=html/body/div/div/div[2]/div[1]/div/div/form/input",
            "id=login-button",
            "class=submit-button btn_action",
            "ai_locator=Login Button");
        ns_end_transaction("clickLoginButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickAddBackpackToCart");
        ns_link("clickAddBackpackToCart"            ,
            "url=https://www.saucedemo.com/inventory.html",
            "tagName=BUTTON",
            "subType=RBU",
            "xpath=//*[@id='add-to-cart-sauce-labs-backpack']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/div/div/div/div[2]/div[2]/button",
            "xpath1=//BUTTON[normalize-space(.)=\"Add to cart\"][@name=\"add-to-cart-sauce-labs-backpack\"][@data-test=\"add-to-cart-sauce-labs-backpack\"]",
            "xpath3=html/body/div/div/div/div[2]/div/div/div/div[1]/div[2]/div[2]/button",
            "id=add-to-cart-sauce-labs-backpack",
            "class=btn btn_primary btn_small btn_inventory",
            "ai_locator=Add Backpack Button");
        ns_end_transaction("clickAddBackpackToCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickShoppingCart");
        ns_link("clickShoppingCart"            ,
            "url=https://www.saucedemo.com/inventory.html",
            "tagName=DIV",
            "subType=RBU",
            "xpath=//*[@id='shopping_cart_container']",
            "xpath2=/html[2]/body/div/div/div/div/div/div[3]",
            "xpath1=//A[@data-test=\"shopping-cart-link\"]/..",
            "xpath3=html/body/div/div/div/div[1]/div[1]/div[3]",
            "id=shopping_cart_container",
            "class=shopping_cart_container",
            "ai_locator=Shopping Cart");
        ns_end_transaction("clickShoppingCart", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickCheckoutButton");
        ns_link("clickCheckoutButton"            ,
            "url=https://www.saucedemo.com/checkout-step-one.html",
            "tagName=BUTTON",
            "subType=RBU",
            "Navigation=1",
            "xpath=//*[@id='checkout']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/div[2]/button[2]",
            "xpath1=//BUTTON[normalize-space(.)=\"Checkout\"][@name=\"checkout\"][@data-test=\"checkout\"]",
            "xpath3=html/body/div[1]/div/div/div[2]/div/div[2]/button[2]",
            "id=checkout",
            "class=btn btn_action btn_medium checkout_button",
            "ai_locator=Checkout Button");
        ns_end_transaction("clickCheckoutButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterFirstName");
        ns_edit_field("enterFirstName"            ,
            "url=https://www.saucedemo.com/checkout-step-one.html",
            "value=John",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='first-name']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/form/div/div/input",
            "xpath1=//INPUT[@placeholder=\"First Name\"][@name=\"firstName\"][@data-test=\"firstName\"]",
            "xpath3=html/body/div/div/div/div[2]/div/form/div[1]/div[1]/input",
            "id=first-name",
            "class=input_error form_input",
            "ai_locator=First Name Input");
        ns_end_transaction("enterFirstName", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterLastName");
        ns_edit_field("enterLastName"            ,
            "url=https://www.saucedemo.com/checkout-step-one.html",
            "value=Doe",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='last-name']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/form/div/div[2]/input",
            "xpath1=//INPUT[@placeholder=\"Last Name\"][@name=\"lastName\"][@data-test=\"lastName\"]",
            "xpath3=html/body/div/div/div/div[2]/div/form/div[1]/div[2]/input",
            "id=last-name",
            "class=input_error form_input",
            "ai_locator=Last Name Input");
        ns_end_transaction("enterLastName", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("enterPostalCode");
        ns_edit_field("enterPostalCode"            ,
            "url=https://www.saucedemo.com/checkout-step-one.html",
            "value=751001",
            "tagName=INPUT",
            "subType=RBU",
            "xpath=//*[@id='postal-code']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/form/div/div[3]/input",
            "xpath1=//INPUT[@placeholder=\"Zip/Postal Code\"][@name=\"postalCode\"][@data-test=\"postalCode\"]",
            "xpath3=html/body/div/div/div/div[2]/div/form/div[1]/div[3]/input",
            "id=postal-code",
            "class=input_error form_input",
            "ai_locator=Postal Code Input");
        ns_end_transaction("enterPostalCode", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickContinueButton");
        ns_link("clickContinueButton"            ,
            "url=https://www.saucedemo.com/checkout-step-two.html",
            "tagName=INPUT",
            "subType=RBU",
            "Navigation=1",
            "xpath=//*[@id='continue']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/form/div[2]/input",
            "xpath1=//INPUT[@value=\"Continue\"][@name=\"continue\"][@data-test=\"continue\"]",
            "xpath3=html/body/div/div/div/div[2]/div/form/div[2]/input",
            "id=continue",
            "class=submit-button btn btn_primary cart_button btn_action",
            "ai_locator=Continue Button");
        ns_end_transaction("clickContinueButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 


        ns_start_transaction("clickFinishButton");
        ns_link("clickFinishButton"            ,
            "url=https://www.saucedemo.com/checkout-complete.html",
            "tagName=BUTTON",
            "subType=RBU",
            "Navigation=1",
            "xpath=//*[@id='finish']",
            "xpath2=/html[2]/body/div/div/div/div[2]/div/div[2]/div[9]/button[2]",
            "xpath1=//BUTTON[normalize-space(.)=\"Finish\"][@name=\"finish\"][@data-test=\"finish\"]",
            "xpath3=html/body/div/div/div/div[2]/div/div[2]/div[9]/button[2]",
            "id=finish",
            "class=btn btn_action btn_medium cart_button",
            "ai_locator=Finish Button");
        ns_end_transaction("clickFinishButton", NS_AUTO_STATUS);
        ns_page_think_time(0.000); 
}
