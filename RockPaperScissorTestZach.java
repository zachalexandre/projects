/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.rockpaperscissortestzach;

import java.util.Scanner;

/**
 *
 * @author Zach Alexandre
 */
public class RockPaperScissorTestZach {
final static int ROCK = 1, SCISSOR = 2, PAPER = 3;
    public static void main(String[] args) {
        
               Scanner scan = new Scanner(System.in);
               Scanner keyboard = new Scanner(System.in);
               String playagain;
               char playagainornot;
               
        System.out.println("Player 1: Choose (1) - Rock, (2) - Scissors, or (3) - Paper: ");
        int player1 = scan.nextInt();
        System.out.println("Player 2: Choose (1) - Rock, (2) - Scissors, or (3) - Paper: ");
        int player2 = scan.nextInt();
     do{
        if (player1 == player2)
        {
            System.out.print("It is a tie");
        } else {
            switch (player1){
            case ROCK -> {
                if (player2 == SCISSOR)
                    System.out.print("Player 1 wins!");
                else
                    System.out.print("Player 2 wins!");
                       }
            case SCISSOR -> {
                if (player2 == PAPER)
                    System.out.print("Player 1 wins!");
                else
                    System.out.print("Player 2 wins!");
                       }
            case PAPER -> {
                if (player2 == ROCK)
                    System.out.print("Player 1 wins!");
                else
                    System.out.print("Player 2 wins!");
                             }
                       }
            }
            System.out.println("Would you like to play again ");
            System.out.println("Please enter Y/N");
            playagain = keyboard.next();
            playagain = playagain.toUpperCase();
            playagainornot = playagain.charAt(0);
     } 
     while (playagainornot == 'Y');
        }
    }

