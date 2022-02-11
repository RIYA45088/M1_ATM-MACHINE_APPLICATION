# Requirements

 ## Introduction
 The Automated Teller Machine(ATM) allows bank customers to access their accounts without visiting the bank. The project is titled as **ATM Machine** and developed using C language.
 When a user needs to withdraw cash, they can enter their PIN number (personal identification number) and the amount to be withdrawn will be displayed in the form of 100s, 500s and 1000s. Once their withdrawn was successful, the amount will be debited in their account.
  
## workflow 
| Codacy | Codiga | CI | Unity |
| --- | --- | --- | --- |
|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/73a1f6d231d3409fad8eee32c4d75258)](https://www.codacy.com/gh/RIYA45088/M1_ATM-MACHINE_APPLICATION/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=RIYA45088/M1_ATM-MACHINE_APPLICATION&amp;utm_campaign=Badge_Grade)|![codica code quality score](https://api.codiga.io/project/30956/status/svg)![codica code grade](https://api.codiga.io/project/30956/score/svg)|[![CI](https://github.com/RIYA45088/M1_ATM-MACHINE_APPLICATION/actions/workflows/main.yml/badge.svg)](https://github.com/RIYA45088/M1_ATM-MACHINE_APPLICATION/actions/workflows/main.yml)|[![Unit Testing - Unity](https://github.com/RIYA45088/M1_ATM-MACHINE_APPLICATION/actions/workflows/unity.yml/badge.svg)](https://github.com/RIYA45088/M1_ATM-MACHINE_APPLICATION/actions/workflows/unity.yml)|



## Folder structure
| 0_Certificates | 1_Requiremnts | 2_Design | 3_Implementation | 4_TestplanAndOutput | 5_Report | 6_ImagesAndVideos | 7_Others |
| --- | --- | --- | --- | --- | --- | --- | --- |
| certification details of the student | Documents detailing requirements and research | Documents related to design of model | All codes and make file | test plans with requirements | summary of all the folders | screenshots of working project | references and supporting documents |

# SWOT Analysis

## Strength
-   Easy and faster to access 
-   provides 24 hrs services without any staffs
-   offer wide range of services
-   Cheaper to Maintain
-   easier to access
-   Access to hard Cash Anywhere at Anytime
 
 ## Weakness
-   Limitations on cash withdrawl
-   Are Costly For The Users
-   Lack of Personal services

## Opportunities
- Deposit cash
- Open or withdraw a fixed deposit

## Threats
- Weak Physical Locks
- Insecure Network Communication
-Without strong disk encryption, criminals can steal 

## Cost and Features
-   Easily Accessable
-   Low  in Cost


# 4 W's and 1 H

## Who
It is restricted only to the person who knows the PIN. Thus, if the customers keep the PIN confidential, no one other than the customer can use the ATM

## What
It's an automatic teller machine to accepts deposits and dispenses cash.

## When
It is available 24X7, 365 days.

## Where
It is available around the world.

## How
The application was developed in C language to prevent the complexity and to make it simple. 

# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR01 |Main Menu  | Implemented |
| HR02 | Deposit |Implemented  |
| HR03 | Balance enguiry | Implemented  |
| HR04 | Cash withdraw | Implemented |
| HR05 | Graphical User Interface |Implemented  |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR01 |Main menu should consist 4 options: 1.Deposit, 2.BalanceEnquiry, 3.CashWithdraw  | HR01| Implemented |
| LR02 | Reading user input to select particular option | HR01| Implemented |
 LR03 | Output screen will display the overall balance  | HR03|Implemented  |
| LR04 | Read user input to withdraw entered amount exactly | HR04| Implemented |
| LR05 |Should display final updated balance after credit or debit | HR02| Implemented |
| LR06 |A clean graphical user interface with all required buttons for ease of use  | HR05| Implemented |



