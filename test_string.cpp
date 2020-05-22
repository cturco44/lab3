#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/* 
*
*   Lab 3 - String Library Test File
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Do NOT submit this file to the AG. The test case used here is 
*   identical to the test cases run on the Autograder. The score you
*   see at the bottom of your output will be your score on the lab.
*
*/

#define STRING_BUFFER 32
#define STDIN_REQUEST "%31s"

#include "String.h"
#include <cstring>
#include <stdio.h>   /* printf */

int main() {
    int num_correct = 0;
    try {
        printf("============================================\n");
        printf(" Running tests for string library erase ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST ERASE 1 ... ");
            String path = "root/shared/user/config";
            path.erase(12, 5);
            if (path != "root/shared/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/shared/user/config\n");
                printf(" EXPECTED STRING: root/shared/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 18) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/shared/config\n");
                printf(" EXPECTED SIZE 18, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST ERASE 2 ... ");
            String pp = "potato parrot";
            pp.erase(12, 4);
            if (pp != "potato parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potato parrot\n");
                printf(" EXPECTED STRING: potato parro\n");
                printf(" STUDENT STRING:  %s\n", pp.c_str());
            }
            else if (pp.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potato parro\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", pp.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST ERASE 3 ... ");
            String pp2 = "potato parro";
            pp2.erase(5, 1);
            if (pp2 != "potat parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potato parro\n");
                printf(" EXPECTED STRING: potat parro\n");
                printf(" STUDENT STRING:  %s\n", pp2.c_str());
            }
            else if (pp2.size() != 11) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potat parro\n");
                printf(" EXPECTED SIZE 11, BUT RECEIVED SIZE %zu\n", pp2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST ERASE 4 ... ");
            String pp3 = "potat parro";
            pp3.erase(0, 1);
            if (pp3 != "otat parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potat parro\n");
                printf(" EXPECTED STRING: otat parro\n");
                printf(" STUDENT STRING:  %s\n", pp3.c_str());
            }
            else if (pp3.size() != 10) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: otat parro\n");
                printf(" EXPECTED SIZE 10, BUT RECEIVED SIZE %zu\n", pp3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST ERASE 5 ... ");
            String pp4 = "otat parro";
            pp4.erase(1, 22);
            if (pp4 != "o") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: otat parro\n");
                printf(" EXPECTED STRING: o\n");
                printf(" STUDENT STRING:  %s\n", pp4.c_str());
            }
            else if (pp4.size() != 1) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: o\n");
                printf(" EXPECTED SIZE 1, BUT RECEIVED SIZE %zu\n", pp4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST ERASE 6 ... ");
            String nums = "0123456789";
            nums.erase(0, 5);
            if (nums != "56789") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 56789\n");
                printf(" STUDENT STRING: %s\n", nums.c_str());
            }
            else if (nums.size() != 5) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 56789\n");
                printf(" EXPECTED SIZE 5, BUT RECEIVED SIZE %zu\n", nums.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST ERASE 7 ... ");
            String nums2 = "0123456789";
            nums2.erase(9, 1);
            if (nums2 != "012345678") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 012345678\n");
                printf(" STUDENT STRING: %s\n", nums2.c_str());
            }
            else if (nums2.size() != 9) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 012345678\n");
                printf(" EXPECTED SIZE 9, BUT RECEIVED SIZE %zu\n", nums2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST ERASE 8 ... ");
            String str = "eecs 281 is fun";
            str.erase(13);
            if (str != "eecs 281 is f") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs 281 is fun\n");
                printf(" EXPECTED STRING: eecs 281 is f\n");
                printf(" STUDENT STRING: %s\n", str.c_str());
            }
            else if (str.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs 281 is f\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST ERASE 9 ... ");
            String str2 = "thisisalongstring";
            str2.erase(7, 4);
            str2.erase(12, 2);
            if (str2 != "thisisastrin") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: thisisalongstring\n");
                printf(" EXPECTED STRING: thisisastrin\n");
                printf(" STUDENT STRING: %s\n", str2.c_str());
            }
            else if (str2.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: thisisastring\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST ERASE 10 ... ");
            String str3 = "emptystuff";
            str3.erase(5, 5);
            str3.erase(0, 5);
            if (str3 != "") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: emptystuff\n");
                printf(" EXPECTED STRING: <empty string>\n");
                printf(" STUDENT STRING: %s\n", str3.c_str());
            }
            else if (str3.size() != 0) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING IS EMPTY\n");
                printf(" EXPECTED SIZE 0, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST ERASE 11 ... ");
            String str3 = "parrot";
            str3.erase(0, 0);
            if (str3 != "parrot") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: parrot\n");
                printf(" EXPECTED STRING: parrot\n");
                printf(" STUDENT STRING: %s\n", str3.c_str());
            }
            else if (str3.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: parrot\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/11 TESTS PASSED\n============================================\n\n", num_correct);
        int erase_correct = num_correct;
        num_correct = 0;

        printf("============================================\n");
        printf(" Running tests for string library insert ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST INSERT 1 ... ");
            String path = "root/user/config";
            path.insert(4, "/shared");
            if (path != "root/shared/user/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/user/config\n");
                printf(" EXPECTED STRING: root/shared/user/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 23) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/shared/user/config\n");
                printf(" EXPECTED SIZE 23, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST INSERT 2 ... ");
            String str2 = " are the best!";
            str2.insert(0, "Parrots");
            if (str2 != "Parrots are the best!") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING:  are the best!\n");
                printf(" EXPECTED STRING: Parrots are the best!\n");
                printf(" STUDENT STRING:  %s\n", str2.c_str());
            }
            else if (str2.size() != 21) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: Parrots are the best!\n");
                printf(" EXPECTED SIZE 21, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST INSERT 3 ... ");
            String str3 = "My favorite class is ";
            str3.insert(21, "EECS 281!");
            if (str3 != "My favorite class is EECS 281!") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: My favorite class is \n");
                printf(" EXPECTED STRING: My favorite class is EECS 281!\n");
                printf(" STUDENT STRING:  %s\n", str3.c_str());
            }
            else if (str3.size() != 30) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: My favorite class is EECS 281!\n");
                printf(" EXPECTED SIZE 30, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST INSERT 4 ... ");
            String str4 = "0123456789";
            String ins = "abc";
            str4.insert(2, ins);
            if (str4 != "01abc23456789") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 01abc23456789\n");
                printf(" STUDENT STRING:  %s\n", str4.c_str());
            }
            else if (str4.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 01abc23456789\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST INSERT 5 ... ");
            String str5 = "01abc23456789";
            String ins = "abc";
            str5.insert(str5.size(), ins);
            if (str5 != "01abc23456789abc") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 01abc23456789\n");
                printf(" EXPECTED STRING: 01abc23456789abc\n");
                printf(" STUDENT STRING:  %s\n", str5.c_str());
            }
            else if (str5.size() != 16) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 01abc23456789abc\n");
                printf(" EXPECTED SIZE 16, BUT RECEIVED SIZE %zu\n", str5.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST INSERT 6 ... ");
            String str6 = "When I start my 281 project, the first thing I think of is FUN";
            str6.insert(61, "NCTIO");
            if (str6 != "When I start my 281 project, the first thing I think of is FUNCTION") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: ... FUN\n");
                printf(" EXPECTED STRING: ... FUNCTION\n");
                printf(" STUDENT STRING:  %s\n", str6.c_str());
            }
            else if (str6.size() != 67) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: <see test file>\n");
                printf(" EXPECTED SIZE 67, BUT RECEIVED SIZE %zu\n", str6.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST INSERT 7 ... ");
            String str7 = "281";
            str7.insert(0, str7);
            if (str7 != "281281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 281281\n");
                printf(" STUDENT STRING:  %s\n", str7.c_str());
            }
            else if (str7.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281281\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str7.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST INSERT 8 ... ");
            String str8 = "281";
            str8.insert(str8.size(), str8);
            if (str8 != "281281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 281281\n");
                printf(" STUDENT STRING:  %s\n", str8.c_str());
            }
            else if (str8.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281281\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str8.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST INSERT 9 ... ");
            String str9 = "281";
            str9.insert(2, str9);
            if (str9 != "282811") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 282811\n");
                printf(" STUDENT STRING:  %s\n", str9.c_str());
            }
            else if (str9.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 282811\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str9.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST INSERT 10 ... ");
            String str10 = "a";
            str10.insert(0, "hahahah");
            if (str10 != "hahahaha") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: a\n");
                printf(" EXPECTED STRING: hahahaha\n");
                printf(" STUDENT STRING:  %s\n", str10.c_str());
            }
            else if (str10.size() != 8) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: hahahaha\n");
                printf(" EXPECTED SIZE 8, BUT RECEIVED SIZE %zu\n", str10.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST INSERT 11 ... ");
            String str11 = "parrot";
            str11.insert(6, "");
            if (str11 != "parrot") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: parrot\n");
                printf(" EXPECTED STRING: parrot\n");
                printf(" STUDENT STRING:  %s\n", str11.c_str());
            }
            else if (str11.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: parrot\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str11.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/11 TESTS PASSED\n============================================\n\n", num_correct);
        int insert_correct = num_correct;
        num_correct = 0;

        printf("============================================\n");
        printf(" Running tests for string library replace ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST REPLACE 1 ... ");
            String path = "root/shared/config";
            path.replace(5, 6, "temp");
            if (path != "root/temp/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/shared/config\n");
                printf(" EXPECTED STRING: root/temp/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 16) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/temp/config\n");
                printf(" EXPECTED SIZE 16, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST REPLACE 2 ... ");
            String str2 = "Bing is a good instructor.";
            str2.replace(15, 19, "search engine.");
            if (str2 != "Bing is a good search engine.") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: Bing is a good instructor.\n");
                printf(" EXPECTED STRING: Bing is a good search engine.\n");
                printf(" STUDENT STRING:  %s\n", str2.c_str());
            }
            else if (str2.size() != 29) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: Bing is a good search engine.\n");
                printf(" EXPECTED SIZE 29, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST REPLACE 3 ... ");
            String str3 = "fun";
            str3.replace(0, 1, "s");
            if (str3 != "sun") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: fun\n");
                printf(" EXPECTED STRING: sun\n");
                printf(" STUDENT STRING:  %s\n", str3.c_str());
            }
            else if (str3.size() != 3) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: sun\n");
                printf(" EXPECTED SIZE 3, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST REPLACE 4 ... ");
            String str4 = "replaceme";
            str4.replace(0, 9, "ok");
            if (str4 != "ok") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: replaceme\n");
                printf(" EXPECTED STRING: ok\n");
                printf(" STUDENT STRING:  %s\n", str4.c_str());
            }
            else if (str4.size() != 2) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: ok\n");
                printf(" EXPECTED SIZE 2, BUT RECEIVED SIZE %zu\n", str4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST REPLACE 5 ... ");
            String str5 = "potatoparrot";
            str5.replace(6, 1, " p");
            if (str5 != "potato parrot") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potatoparrot\n");
                printf(" EXPECTED STRING: potato parrot\n");
                printf(" STUDENT STRING:  %s\n", str5.c_str());
            }
            else if (str5.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potato parrot\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str5.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST REPLACE 6 ... ");
            String str6 = "x";
            str6.replace(0, 1, "lab3lab3lab3");
            if (str6 != "lab3lab3lab3") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: x\n");
                printf(" EXPECTED STRING: lab3lab3lab3\n");
                printf(" STUDENT STRING:  %s\n", str6.c_str());
            }
            else if (str6.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: lab3lab3lab3\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str6.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST REPLACE 7 ... ");
            String str7 = "apple";
            str7.replace(2, 281, "ex");
            if (str7 != "apex") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: apple\n");
                printf(" EXPECTED STRING: apex\n");
                printf(" STUDENT STRING:  %s\n", str7.c_str());
            }
            else if (str7.size() != 4) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: apex\n");
                printf(" EXPECTED SIZE 4, BUT RECEIVED SIZE %zu\n", str7.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST REPLACE 8 ... ");
            String str8 = "eecs281eecs2811";
            str8.replace(11, 4, "370");
            if (str8 != "eecs281eecs370") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281eecs2811\n");
                printf(" EXPECTED STRING: eecs281eecs370\n");
                printf(" STUDENT STRING:  %s\n", str8.c_str());
            }
            else if (str8.size() != 14) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs281eecs370\n");
                printf(" EXPECTED SIZE 14, BUT RECEIVED SIZE %zu\n", str8.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST REPLACE 9 ... ");
            String str9 = "koala";
            str9.replace(0, 1, "lala");
            if (str9 != "lalaoala") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: koala\n");
                printf(" EXPECTED STRING: lalaoala\n");
                printf(" STUDENT STRING:  %s\n", str9.c_str());
            }
            else if (str9.size() != 8) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: lalaoala\n");
                printf(" EXPECTED SIZE 8, BUT RECEIVED SIZE %zu\n", str9.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST REPLACE 10 ... ");
            String str10 = "eecs281";
            str10.replace(0, 10, "");
            if (str10 != "") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: <empty string>\n");
                printf(" STUDENT STRING:  %s\n", str10.c_str());
            }
            else if (str10.size() != 0) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: <empty string>\n");
                printf(" EXPECTED SIZE 0, BUT RECEIVED SIZE %zu\n", str10.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST REPLACE 11 ... ");
            String str11 = "eecs281";
            str11.replace(0, 4, "");
            if (str11 != "281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: 281\n");
                printf(" STUDENT STRING:  %s\n", str11.c_str());
            }
            else if (str11.size() != 3) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281\n");
                printf(" EXPECTED SIZE 3, BUT RECEIVED SIZE %zu\n", str11.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 12
            printf("\n RUNNING TEST REPLACE 12 ... ");
            String str12 = "eecs281";
            str12.replace(4, 3, "");
            if (str12 != "eecs") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: eecs\n");
                printf(" STUDENT STRING:  %s\n", str12.c_str());
            }
            else if (str12.size() != 4) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs\n");
                printf(" EXPECTED SIZE 4, BUT RECEIVED SIZE %zu\n", str12.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 13
            printf("\n RUNNING TEST REPLACE 13 ... ");
            String str13 = "eecs281";
            str13.replace(3, 2, str13);
            if (str13 != "eeceecs28181") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: eeceecs28181\n");
                printf(" STUDENT STRING:  %s\n", str13.c_str());
            }
            else if (str13.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eeceecs28181\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str13.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 14
            printf("\n RUNNING TEST REPLACE 14 ... ");
            String str14 = "are";
            str14.replace(2, 0, "hur8r3");
            if (str14 != "arhur8r3e") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: are\n");
                printf(" EXPECTED STRING: arhur8r3e\n");
                printf(" STUDENT STRING: %s\n", str14.c_str());
            }
            else if (str14.size() != 9) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: arhur8r3e\n");
                printf(" EXPECTED SIZE 9, BUT RECEIVED SIZE %zu\n", str14.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 15
            printf("\n RUNNING TEST REPLACE 15 ... ");
            String str15 = "r";
            str15.replace(0, 0, "live");
            if (str15 != "liver") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: r\n");
                printf(" EXPECTED STRING: liver\n");
                printf(" STUDENT STRING: %s\n", str15.c_str());
            }
            else if (str15.size() != 5) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: liver\n");
                printf(" EXPECTED SIZE 5, BUT RECEIVED SIZE %zu\n", str15.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 16
            printf("\n RUNNING TEST REPLACE 16 ... ");
            String str16 = "uqwergniniwiheteoh";
            str16.replace(2, 0, "fuf7t8f7sf7");
            if (str16 != "uqfuf7t8f7sf7wergniniwiheteoh") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: uqwergniniwiheteoh\n");
                printf(" EXPECTED STRING: uqfuf7t8f7sf7wergniniwiheteoh\n");
                printf(" STUDENT STRING: %s\n", str16.c_str());
            }
            else if (str16.size() != 29) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: uqfuf7t8f7sf7wergniniwiheteoh\n");
                printf(" EXPECTED SIZE 29, BUT RECEIVED SIZE %zu\n", str16.size());                    
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 17
            printf("\n RUNNING TEST REPLACE 17 ... ");
            String str17 = "wants12934875rgywe";
            str17.replace(0, 0, "ufeisiohusopT$*(&YEGUity4irjgoiuij");
            if (str17 != "ufeisiohusopT$*(&YEGUity4irjgoiuijwants12934875rgywe") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: wants12934875rgywe\n");
                printf(" EXPECTED STRING: ufeisiohusopT$*(&YEGUity4irjgoiuijwants12934875rgywe\n");
                printf(" STUDENT STRING: %s\n", str17.c_str());
            }
            else if (str17.size() != 52) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: ufeisiohusopT$*(&YEGUity4irjgoiuijwants12934875rgywe\n");
                printf(" EXPECTED SIZE 52, BUT RECEIVED SIZE %zu\n", str17.size());                    
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 18
            printf("\n RUNNING TEST REPLACE 18 ... ");
            String str18 = "parrot";
            str18.replace(6, 6, "oy");
            if (str18 != "parrotoy") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: parrot\n");
                printf(" EXPECTED STRING: parrotoy\n");
                printf(" STUDENT STRING: %s\n", str18.c_str());
            }
            else if (str18.size() != 8) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: parrotoy\n");
                printf(" EXPECTED SIZE 8, BUT RECEIVED SIZE %zu\n", str18.size());                    
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 19
            printf("\n RUNNING TEST REPLACE 19 ... ");
            String str19 = "parrot";
            str19.replace(6, 0, "");
            if (str19 != "parrot") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: parrot\n");
                printf(" EXPECTED STRING: parrot\n");
                printf(" STUDENT STRING: %s\n", str19.c_str());
            }
            else if (str19.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: parrot\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str19.size());                    
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 20
            printf("\n RUNNING TEST REPLACE 20 ... ");
            String str20 = "On$";
            str20.replace(0, 2, "gwu9hwehh08hwhwehggew");
            if (str20 != "gwu9hwehh08hwhwehggew$") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: On$\n");
                printf(" EXPECTED STRING: gwu9hwehh08hwhwehggew$\n");
                printf(" STUDENT STRING: %s\n", str20.c_str());
            }
            else if (str20.size() != 22) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: gwu9hwehh08hwhwehggew$\n");
                printf(" EXPECTED SIZE 22, BUT RECEIVED SIZE %zu\n", str20.size());                    
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/20 TESTS PASSED\n============================================\n\n", num_correct);
        int replace_correct = num_correct;
        num_correct = 0;

        printf("=======================================================\n");
        printf(" Running tests for string library find_first_of ...\n");
        printf("=======================================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST FIND_FIRST_OF 1 ... ");
            String str = "the quick brown fox jumps over the lazy dog";
            size_t solution[26] = { 36,10,7,40,2,16,42,1,6,20,8,35,22,14,12,23,4,11,24,0,5,27,13,18,38,37 };
            bool passed = true;
            int counter = 0;
            char* target = new char[2];
            for (int i = 0; i < 26; ++i) {
                target[0] = static_cast<char>('a' + i);
                target[1] = '\0';
                ++counter;
                String next_char = target;
                size_t res = str.find_first_of(next_char);
                if (res != solution[i]) {
                    passed = false;
                    printf("FAILED\n");
                    printf(" EXPECTED INDEX %zu FOR CHARACTER \'%c\', BUT GOT INDEX %zu\n", solution[i], *target, res);
                    break;
                }
            }
            if (passed) {
                printf("SUCCESS\n");
                ++num_correct;
            }
            // clean up memory
            delete[] target;
            printf("=======================================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST FIND_FIRST_OF 2 ... ");
            String path = "root/user/config";
            size_t start = path.find_first_of("/");
            if (start != 4) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 4, BUT GOT INDEX %zu\n", start);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST FIND_FIRST_OF 3 ... ");
            String str3 = "the quick brown fox jumps over the lazy dog";
            size_t sol = str3.find_first_of("jogkuq");
            if (sol != 4) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 4, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST FIND_FIRST_OF 4 ... ");
            String question = "This is a question?";
            String target = "?!.)(!";
            size_t sol = question.find_first_of(target);
            if (sol != 18) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 18, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST FIND_FIRST_OF 5 ... ");
            String exclamation = "This is an exclamation!";
            String target = "?!.)(!";
            size_t sol = exclamation.find_first_of(target);
            if (sol != 22) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 22, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST FIND_FIRST_OF 6 ... ");
            String paren = "Words in parentheses can (not) be ignored.";
            String target = "?!.)(!";
            size_t sol = paren.find_first_of(target);
            if (sol != 25) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 25, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST FIND_FIRST_OF 7 ... ");
            String str7 = "appleappleappleappleorangeappleorange";
            size_t sol = str7.find_first_of("GgGgGgGgGg", 27);
            if (sol != 35) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 35, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST FIND_FIRST_OF 8 ... ");
            String str8 = "my_eecs281_project";
            size_t sol = str8.find_first_of("SEGFAULT");
            if (sol != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST FIND_FIRST_OF 9 ... ");
            String str9 = "my_eecs281_project";
            size_t sol = str9.find_first_of("SEGFAULT", 281);
            if (sol != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST FIND_FIRST_OF 10 ... ");
            String str10 = "my_eecs281_project";
            size_t sol = str10.find_first_of("1234567890", 9);
            if (sol != 9) {
                printf("FAILED\n");
                printf(" EXPECTED 9, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST FIND_FIRST_OF 11 ... ");
            String str11 = "which";
            size_t sol = str11.find_first_of("xihczu", 2);
            if (sol != 2) {
                printf("FAILED\n");
                printf(" EXPECTED 2, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 12
            printf("\n RUNNING TEST FIND_FIRST_OF 12 ... ");
            String str12 = "https:w.cnn.com/201e9/09/1$";
            size_t sol = str12.find_first_of("fehafafafi(@)^(@)", 16);
            if (sol != 19) {
                printf("FAILED\n");
                printf(" EXPECTED 19, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 13
            printf("\n RUNNING TEST FIND_FIRST_OF 13 ... ");
            String str13 = "hthe848$$wihniwihethiwti";
            size_t sol = str13.find_first_of("ihw4thw4htiwh", 22);
            if (sol != 22) {
                printf("FAILED\n");
                printf(" EXPECTED 22, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 14
            printf("\n RUNNING TEST FIND_FIRST_OF 14 ... ");
            String str14 = "https:uwgefw.m\"fxd";
            size_t sol = str14.find_first_of("ugvhgcfxd", 3);
            if (sol != 6) {
                printf("FAILED\n");
                printf(" EXPECTED 6, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        printf("\n %d/14 TESTS PASSED\n=======================================================\n\n", num_correct);
        int ffo_correct = num_correct;
        num_correct = 0;

        printf("=======================================================\n");
        printf(" Running tests for string library find_last_of ...\n");
        printf("=======================================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST FIND_LAST_OF 1 ... ");
            String str = "the quick brown fox jumps over the lazy dog";
            size_t solution[26] = { 36,10,7,40,33,16,42,32,6,20,8,35,22,14,41,23,4,29,24,31,21,27,13,18,38,37 };
            bool passed = true;
            int counter = 0;
            char* target = new char[2];
            for (int i = 0; i < 26; ++i) {                
                target[0] = static_cast<char>('a' + i);
                target[1] = '\0';
                ++counter;
                String next_char = target;
                size_t res = str.find_last_of(next_char);
                if (res != solution[i]) {
                    passed = false;
                    printf("FAILED\n");
                    printf(" EXPECTED INDEX %zu FOR CHARACTER \'%c\', BUT GOT INDEX %zu\n", solution[i], *target, res);
                    break;
                }
            }
            if (passed) {
                printf("SUCCESS\n");
                ++num_correct;
            }
            // clean up memory
            delete[] target;
            printf("=======================================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST FIND_LAST_OF 2 ... ");
            String path = "root/user/config";
            size_t last = path.find_last_of("/");
            if (last != 9) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 9, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST FIND_LAST_OF 3 ... ");
            String str3 = "the quick brown fox jumps over the lazy dog";
            size_t last = str3.find_last_of("xicku");
            if (last != 21) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 21, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST FIND_LAST_OF 4 ... ");
            String str4 = "EECS 281!!!";
            size_t last = str4.find_last_of("EECS 280?!!!", 10);
            if (last != 10) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 10, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST FIND_LAST_OF 5 ... ");
            String str5 = "Words in parentheses can (not) be ignored!!!!!";
            str5.erase(41, 5);
            size_t last = str5.find_last_of("?!.)(!", 65);
            if (last != 29) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 29, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST FIND_LAST_OF 6 ... ");
            String str6 = "Words in parentheses can (not) be ignored!!!!!";
            size_t last = str6.find_last_of("?!.)(!", 24);
            if (last != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST FIND_LAST_OF 7 ... ");
            String str7 = "carrots and parrots";
            size_t last = str7.find_last_of("yuck");
            if (last != 0) {
                printf("FAILED\n");
                printf(" EXPECTED 0, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST FIND_LAST_OF 8 ... ");
            String str8 = "carrots and parrots";
            size_t last = str8.find_last_of("yuck", 0);
            if (last != 0) {
                printf("FAILED\n");
                printf(" EXPECTED 0, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }
        
        {
            // TEST CASE 9
            printf("\n RUNNING TEST FIND_LAST_OF 9 ... ");
            String str9 = "thoroughbreds";
            size_t last = str9.find_last_of("parrot", 11);
            if (last != 9) {
                printf("FAILED\n");
                printf(" EXPECTED 9, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST FIND_LAST_OF 10 ... ");
            String str10 = "which";
            size_t last = str10.find_last_of("*A&TFEFIUYG?");
            if (last != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST FIND_LAST_OF 11 ... ");
            String str11 = "usggAD9345uu3ibeLKE:Ffuf7t8uwgefhsnhgdgtkhm";
            size_t last = str11.find_last_of("536788ir4wo874", 0);
            if (last != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 12
            printf("\n RUNNING TEST FIND_LAST_OF 12 ... ");
            String str12 = "https:ugniwihethiwtigefw.m\"fxd";
            size_t last = str12.find_last_of("gywe", 30);
            if (last != 23) {
                printf("FAILED\n");
                printf(" EXPECTED 23, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 13
            printf("\n RUNNING TEST FIND_LAST_OF 13 ... ");
            String str13 = "yaaaaaaaaaaaaaaaay";
            size_t last = str13.find_last_of("happy", 11);
            if (last != 11) {
                printf("FAILED\n");
                printf(" EXPECTED 11, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 14
            printf("\n RUNNING TEST FIND_LAST_OF 14 ... ");
            String str14 = "usgnaoeggAD9MIAD9345u";
            size_t last = str14.find_last_of("12934875ruhf", 9);
            if (last != 0) {
                printf("FAILED\n");
                printf(" EXPECTED 0, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 15
            printf("\n RUNNING TEST FIND_LAST_OF 15 ... ");
            String str15 = "which";
            size_t last = str15.find_last_of("hi", 5);
            if (last != 4) {
                printf("FAILED\n");
                printf(" EXPECTED 4, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        printf("\n %d/15 TESTS PASSED\n=======================================================\n\n", num_correct);
        printf("=======================================================\n");
        printf(" PERFORMANCE SUMMARY:\n");
        printf(" ERASE TESTS PASSED: %d/11 (%.2f%%)\n", erase_correct, ((float)erase_correct/11)*100);
        printf(" INSERT TESTS PASSED: %d/11 (%.2f%%)\n", insert_correct, ((float)insert_correct/11)*100);
        printf(" REPLACE TESTS PASSED: %d/20 (%.2f%%)\n", replace_correct, ((float)replace_correct/20)*100);
        printf(" FIND_FIRST_OF TESTS PASSED: %d/14 (%.2f%%)\n", ffo_correct, ((float)ffo_correct/14)*100);
        printf(" FIND_LAST_OF TESTS PASSED: %d/15 (%.2f%%)\n", num_correct, ((float)num_correct/15)*100);

        num_correct += ffo_correct += replace_correct += insert_correct += erase_correct;

        printf(" TOTAL TESTS PASSED: %d/71 (%.2f%%)\n", num_correct, ((float)num_correct/71)*100);
        printf("=======================================================\n");
        printf(" FINAL SCORE: %.2f/10\n", ((float)num_correct/71)*10);
        return 0;
    }
    catch (const String_exception &s) {
        printf("FAILED\n\n YOUR PROGRAM THREW AN EXCEPTION FOR THIS TEST CASE ...\n");
        printf(" TEST FAILED ... MAKE SURE YOU AREN'T ACCESSING BAD MEMORY\n");
        printf(" PROGRAM EXITING WITH ERROR\n");
        return 1;
    }
    catch (const std::exception &e) {
        printf("FAILED\n\n YOUR PROGRAM THREW AN EXCEPTION FOR THIS TEST CASE ...\n");
        printf(" TEST FAILED ... MAKE SURE YOU AREN'T ACCESSING BAD MEMORY\n");
        printf(" PROGRAM EXITING WITH ERROR\n");
        return 1;
    }
}
