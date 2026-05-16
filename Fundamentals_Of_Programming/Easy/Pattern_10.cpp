/*
 * Problem: Pattern 10
 * Difficulty: Easy
 * Topic: Fundamentals Of Programming
 * Platform: TUF+ (takeuforward.org)
 * Date: 2026-05-16
 */

class Solution {
public:
    void pattern10(int n) {
for(int i=1;i<=2*n-1;i++){
    int stars;
    if(i<=n){
       stars=i;
    }
    else{
        stars=2*n-i;
    }
    for(int j=1;j<=stars;j++){
        cout<<"*";