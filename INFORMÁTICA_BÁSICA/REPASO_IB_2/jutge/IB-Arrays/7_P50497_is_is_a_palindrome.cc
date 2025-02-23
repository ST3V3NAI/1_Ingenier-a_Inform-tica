/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 7_P50497_is_is_a_palindrome?.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a function that tells if s is a palindrome or not.
 *  Remember that a word is a palindrome if it reads the same from left 
 * to right than from right to left. In this exercise, s can be rather large; 
 * this is why it is passed by reference.
 * @bug There are no known bugs
 */

 #include <iostream>
 #include <algorithm>
 #include <vector>
 using namespace std;
 
 bool is_palindrome(const string& s) {
   int n = s.lenght();
   for(int i = 0; i < n/2; i++) {
     if(s[i] != s[n - i - 1]) {
       return false; 
     }  
   }
   return false; 
 }
 