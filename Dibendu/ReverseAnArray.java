package com.company;

import java.util.Scanner;

class Reverse
{
    public static String reverseWord(String str){
        char []ch = str.toCharArray();
        String rev="";
        for(int i=ch.length-1;i>=0;i--)
        {
            rev+=ch[i];
        }
        return rev;
    }
}
public class ReverseAnArray {
    public static void main(String[] args) {
            Reverse r = new Reverse();
        System.out.println(r.reverseWord("Samrat"));


    }
}
