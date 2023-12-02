/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.cowsandbulls_nogueraspython;

import java.util.ArrayList;
import java.util.Scanner;
/**
 *
 * @author Zach Alexandre
 */
public class CowsAndBulls_NoguerasPython {
final static int Rock = 1, Paper = 2, Scissors = 3;
    public static void main(String[] args) {
        int secret;
        String target = getNum();
        
        Scanner scn = new Scanner(System.in);
        Scanner in = new Scanner(System.in);
        
        System.out.println ("Before we start the game Player 1 and Player 2 must compete in a game of Rock Paper Scissors!");
        System.out.println ("Whoever wins will determing who goes first.");
        System.out.println ("Your options are [1] Rock [2] Paper [3] Scissors");
        
        System.out.println ("Player 1:");
        int RPSplayer1 = scn.nextInt();
        System.out.println ("Player 2:");
        int RPSplayer2 = scn.nextInt();
        
                if (RPSplayer1 == RPSplayer2)
        {
            System.out.print("It is a tie");
        } else {
            switch (RPSplayer1){
            case Rock -> {
                if (RPSplayer2 == Scissors)
                    System.out.print("Congrats! Player 1 Wins!");
                else
                    System.out.print("Congrats! Player 2 Wins!");
                       }
            case Scissors -> {
                if (RPSplayer2 == Paper)
                    System.out.print("Congrats! Player 1 Wins!");
                else
                    System.out.print("Congrats! Player 2 Wins!");
                       }
            case Paper -> {
                if (RPSplayer2 == Rock)
                    System.out.print("Congrats! Player 1 Wins!");
                else
                    System.out.print("Congrats! Player 2 Wins!");
                             }
                       }
            }
        
        System.out.println ("\n\nWelcome to Cows and Bulls!");
        System.out.println ("Please Input your Secret Code.");
        secret = scn.nextInt();
        System.out.println ("Secret Code is:" + secret + "\n");
        
        System.out.println("Hello Guesser!");
        System.out.println("You have 10 tries to guess the 4 digit code!");
        System.out.println("Goodluck!\n");
        
        for (int i = 1; i <= 10; i++) {
            System.out.print(i+". ");
            
            String guess = in.next();
            int feedback = feedback(target, guess);
            System.out.println(guess+" - "+(feedback/10)+" bulls, "+(feedback%10)+" cows");
            if (feedback == 40) {System.out.println("YOOOOO! You have successfully guessed the secret code!\nCongratulations!"); return;}
        }
        
        System.out.println("Dang! You have run out of guesses D:\nThe number was - "+target); 
    
    }

    static String getNum() {
        ArrayList<String> possib = new ArrayList<>();
        for (int a = 1; a <= 9; a++) { 
            for (int b = 1; b <= 9; b++) {
                if (b == a) continue;
                for (int c = 1; c <= 9; c++) {
                    if (c == b || c == a) continue;
                    for (int d = 1; d <= 9; d++) {
                        if (d == a || d == b || d == c) continue;
                        String cnt = ""+a+b+c+d;
                        possib.add(cnt);
                    }
                }
            }
        }
        int secret = 0;
        return possib.get((int)(secret * possib.size()));
    }

    static int feedback(String ans,String guess) {
        int bulls = 0, cows = 0;
        for (int i = 0; i < guess.length(); i++) {
            int ind = ans.indexOf(guess.charAt(i));
            if (ind == i) bulls++;
            else if (ind >= 0) cows++;
        }
        return bulls * 10 + cows;
    }
}
    

