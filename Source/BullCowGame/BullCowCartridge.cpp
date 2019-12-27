// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    SetupGame();
    
    //PrintLine(TEXT("The hidden word is: %s. \nIt is %i characters long."), *HiddenWord, HiddenWord.Len()); // Debug line
    
    //PrintLine(FString::Printf(TEXT("The hidden word is: %s"), *HiddenWord)); // Debug line

    PrintLine(TEXT("Welcome to the Bull Cow Game!!"));
    PrintLine(TEXT("Press Tab to interact with me.\nPlease guess the %i word and press Enter:"), HiddenWord.Len());

    
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    PrintLine(Input);
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Correct, Good Job!"));
    }
    else
    {
        PrintLine(TEXT("Incorrect"));
        if (HiddenWord.Len() != Input.Len())
        {
            PrintLine(TEXT("The hidden word is %i letters long."), HiddenWord.Len());
        }
        --Lives;
    }
 
    // Check if isogram
    // Prompt to guess again
    // Check if right number of characters
    // Prompt to guess again

    // Remove Life

    // Check if lives > 0
    // If yes GuessAgain
    // Show lives left
    // If no show GameOver and HiddenWord
    // Promot to Play Agin, Press Enter to plat again
    // Check User input
    // PlayAgain or Quit
}

void UBullCowCartridge::SetupGame() 
{
    HiddenWord = TEXT("cake");
    Lives = 3;
}