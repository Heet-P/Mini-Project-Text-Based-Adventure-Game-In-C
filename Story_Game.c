#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

void intro(char name[], char gender[]);
void story_part1(char name[], char gender[]);
void story_part2(char name[], char gender[]);
void story_part3(char name[], char gender[]);
void story_part4(char name[], char gender[]);
void story_part5(char name[], char gender[]);
void final_battle(char name[], char gender[]);

int main() 
{
    char name[MAX_NAME_LENGTH];
    char gender[10];
    
    printf("Welcome, brave warrior of Tsushima.\n");
    printf("Before we begin your journey, what should we call you?\n");
    printf("Enter your character's name: ");
    fgets(name, MAX_NAME_LENGTH, stdin);
   

    printf("And what is your gender? (Male/Female): ");
    fgets(gender, sizeof(gender), stdin);

    intro(name, gender);
    story_part1(name, gender);
    story_part2(name, gender);
    story_part3(name, gender);
    story_part4(name, gender);
    story_part5(name, gender);
    final_battle(name, gender);

    printf("\nCongratulations, %s, you have completed your quest and saved the island of Tsushima from the Mongol invasion.\n", name);
    printf("Now, let the Mongols rest in hell.\n");
    return 0;
}

void intro(char name[], char gender[]) 
{
    printf("\n\n*** The Adventure Begins ***\n\n");
    printf("The island of Tsushima is under siege, the air thick with the stench of burning villages.\n");
    printf("You, %s, a loyal samurai, stand among the remnants of your village, determined to rescue your uncle and push back the Mongol invaders.\n", name);
    printf("\nYour mission is clear: Gather five ancient Mongolian artifacts to help plan the attack against Khotun Khan.\n");
    printf("If you succeed, the Japanese forces may stand a chance. If you fail, Tsushima will be lost to the tides of history.\n");
}

void story_part1(char name[], char gender[]) 
{
    printf("\n\n--- Part 1: The Call to Arms ---\n\n");
    printf("In the distance, you hear the thunderous BOOOOMMM!!!! of a Mongol cannon striking a nearby shrine.\n");
    printf("Screams echo in the distance, and the sky is darkened by rising smoke.\n\n");

    printf("A wounded villager stumbles toward you, begging for aid.\n");
    printf("Villager: '%s! They have taken the sacred scrolls and left nothing but ruin in their path. The artifacts... you must find them!'\n", name);
    printf("\nWhat will you do?\n");
    printf("1. Comfort the villager and vow to retrieve the artifacts.\n");
    printf("2. Ignore the villager and focus on finding the artifacts quickly.\n");
    
    int choice;
    scanf("%d", &choice);
    getchar(); 

    if (choice == 1) 
    {
        printf("\nYou nod solemnly, placing a reassuring hand on the villager's shoulder.\n");
        printf("%s: 'I will bring back the artifacts and ensure our people are avenged.'\n", name);
    } 
    else 
    {
        printf("\nWithout a word, you rush past the villager, knowing time is of the essence.\n");
        printf("%s: 'There is no time for sympathy, only action.'\n", name);
    }
    
    printf("\nYou set off into the forest, the sound of wind rustling through the trees masking the distant shouts of Mongol soldiers.\n");
}

// Second part of the story
void story_part2(char name[], char gender[]) 
{
    printf("\n\n--- Part 2: The Forest of Shadows ---\n\n");
    printf("You step cautiously into the dense forest, the sunlight barely piercing through the canopy above.\n");
    printf("Suddenly, you hear a faint crack behind you. A Mongol scout! The sharp TWANG!!! of his bowstring fills the air as he releases an arrow in your direction.\n");

    printf("\nWhat will you do?\n");
    printf("1. Dive to the ground to avoid the arrow.\n");
    printf("2. Charge at the scout with your katana drawn.\n");

    int choice;
    scanf("%d", &choice);
    getchar(); // to remove newline character

    if (choice == 1) 
    {
        printf("\nWith lightning reflexes, you drop to the ground, feeling the arrow pass mere inches above your head.\n");
        printf("Rolling to your feet, you draw your katana and prepare to face the scout.\n");
    } else 
    {
        printf("\nYou charge forward, your katana gleaming as you raise it for a deadly strike.\n");
        printf("With a swift, clean motion, you dispatch the scout before he can react.\n");
    }

    printf("\nAs the scout falls, you notice a leather pouch hanging from his belt. Inside, you find the first artifact: an intricately carved Mongolian horse pendant.\n");
    printf("The pendant emits an ominous glow, and you sense its importance to the Mongols.\n\n");
    printf("One artifact down, four more to go. But the path ahead is treacherous, and Khotun Khan's forces will only grow stronger...\n");
}
// Story part 3
void story_part3(char name[], char gender[]) 
{
    printf("\n\n--- Part 3: The Hidden Shrine ---\n\n");
    printf("You continue deeper into the mountains, guided by a faint path.\n");
    printf("As you enter a clearing, you see a shrine in ruins but untouched by the Mongols.\n");
    printf("You sense one of the artifacts nearby, hidden among the offerings.\n");
    printf("The silence is eerie, but then, you hear footsteps Mongol warriors approach!\n\n");

    printf("What will you do?\n");
    printf("1. Hide behind a statue and wait for them to pass.\n");
    printf("2. Prepare an ambush with your bow.\n");

    int choice;
    scanf("%d", &choice);
    getchar();

    if (choice == 1) 
    {
        printf("\nYou press yourself against the cold stone of the statue, holding your breath.\n");
        printf("The warriors walk by, unaware of your presence. Once they pass, you quickly retrieve the artifact: a silver amulet shaped like a wolf’s fang.\n");
    } 
    else 
    {
        printf("\nYou silently draw your bow and take aim, releasing two arrows in quick succession.\n");
        printf("The Mongols fall, and you step forward to retrieve the artifact: a silver amulet shaped like a wolfs fang.\n");
    }
    printf("\nThree artifacts down, but danger grows with each step.\n");
}

// Story part 4
void story_part4(char name[], char gender[]) 
{
    printf("\n\n--- Part 4: The River of Shadows ---\n\n");
    printf("You follow the riverbank, your senses heightened.\n");
    printf("Ahead, a glint of metal catches your eye—a Mongol artifact, half-buried in the sand.\n");
    printf("As you reach for it, a Mongol commander blocks your path, sword drawn.\n\n");

    printf("What will you do?\n");
    printf("1. Engage him in a duel.\n");
    printf("2. Attempt to outmaneuver him and grab the artifact.\n");

    int choice;
    scanf("%d", &choice);
    getchar();

    if (choice == 1) 
    {
        printf("\nYou unsheathe your katana, matching his stance. Steel clashes, and after a fierce duel, you defeat him.\n");
        printf("You pick up the artifact: a bronze pendant with a Mongolian war crest.\n");
    } 
    else 
    {
        printf("\nYou feint to the left, then dive toward the artifact, grabbing it before rolling away.\n");
        printf("With quick reflexes, you evade his attacks and escape with the bronze pendant.\n");
    }
    printf("\nYou now possess four artifacts. The final piece awaits, somewhere in Tsushima’s heartland.\n");
}

// Story part 5
void story_part5(char name[], char gender[]) 
{
    printf("\n\n--- Part 5: The Fortress of Shadows ---\n\n");
    printf("You reach the heart of Tsushima, where Khotun Khan’s main fortress looms.\n");
    printf("Inside, they keep the final artifact. But the place is heavily guarded.\n\n");

    printf("What will you do?\n");
    printf("1. Sneak inside under the cover of darkness.\n");
    printf("2. Charge the gate, hoping the element of surprise will give you an edge.\n");

    int choice;
    scanf("%d", &choice);
    getchar();

    if (choice == 1) 
    {
        printf("\nUsing shadows as your allies, you slip past the guards and infiltrate the fortress.\n");
        printf("In a hidden room, you find the final artifact: a gold mask worn by Mongolian shaman.\n");
    } 
    else 
    {
        printf("\nYou sprint toward the gate, letting out a battle cry that echoes through the fortress.\n");
        printf("Fighting your way inside, you finally reach the room with the artifact: a gold mask worn by Mongolian shaman.\n");
    }

    printf("\nWith all five artifacts in your possession, you feel a surge of resolve.\n");
    printf("The time to face Khotun Khan and rescue your uncle is near.\n");
}
// Final battle function
void final_battle(char name[], char gender[]) 
{
    printf("\n\n--- Final Showdown: Face-off with Khotun Khan ---\n\n");
    printf("With the five artifacts safely secured, you make your way to the heart of the Mongol fortress.\n");
    printf("There, waiting with a cold, calculating smile, stands Khotun Khan himself, your uncle bound at his feet.\n");
    printf("Khotun Khan: 'Ah, %s, the warrior who thinks they can defy the might of the Mongol Empire. You’ve come to die.'\n", name);
    printf("\nThe air is thick with tension as you draw your weapon, ready to face the leader of the invasion.\n");

    int playerHealth = 100, khanHealth = 100;
    int choice;

    while (playerHealth > 0 && khanHealth > 0) 
    {
        printf("\nKhotun Khan lunges forward, his heavy sword cleaving the air toward you!\n");

        printf("What will you do?\n");
        printf("1. Strike back with your katana\n");
        printf("2. Throw a kunai to wound him from a distance\n");
        printf("3. Use a smoke bomb to escape with the artifacts\n");

        scanf("%d", &choice);
        getchar(); // Consume newline

        if (choice == 1) 
        {
            printf("\nWith a shout, you charge at Khotun Khan, swinging your katana in a deadly arc.\n");
            int damageToKhan = rand() % 25 + 15;
            int damageToPlayer = rand() % 20 + 10;
            printf("You inflict %d damage on Khotun Khan!\n", damageToKhan);
            khanHealth -= damageToKhan;

            printf("But he counters, slashing you for %d damage!\n", damageToPlayer);
            playerHealth -= damageToPlayer;
        } 
        else if (choice == 2) 
        {
            printf("\nYou quickly throw a kunai, aiming for his chest!\n");
            int damageToKhan = rand() % 30 + 10;
            printf("The kunai hits, dealing %d damage!\n", damageToKhan);
            khanHealth -= damageToKhan;

            int damageToPlayer = rand() % 15 + 5;
            printf("Khotun Khan retaliates, wounding you for %d damage!\n", damageToPlayer);
            playerHealth -= damageToPlayer;
        } 
        else if (choice == 3) 
        {
            printf("\nYou toss a smoke bomb to the ground, shrouding the area in a thick cloud of smoke.\n");
            printf("Under cover of darkness, you snatch the artifacts and prepare to escape.\n");
            printf("\nWill you...\n");
            printf("1. Flee from the fortress with the artifacts, risking pursuit?\n");
            printf("2. Use the smoke cover to launch a surprise attack on Khotun Khan?\n");

            scanf("%d", &choice);
            getchar();

            if (choice == 1) 
            {
                printf("\nYou dash into the shadows, artifacts clutched tightly. Behind you, you hear shouts as the Mongols give chase.\n");
                printf("But you are too swift and too determined.\n");
                printf("The artifacts are safe, and Tsushima now has the tools it needs to defeat the invaders.\n");
                printf("Though you could not face Khotun Khan directly, you live to fight another day.\n");
                printf("\nCongratulations, %s. You have succeeded in your mission!, However your Uncle died as Khotun Khan got Angry that you stole the artifacts.\n", name);
                return;
            } 
            else 
            {
                printf("\nYou let the smoke guide your blade, launching a surprise strike at Khotun Khan!\n");
                int damageToKhan = rand() % 50 + 20;
                printf("The attack is devastating, dealing %d damage to Khotun Khan!\n", damageToKhan);
                khanHealth -= damageToKhan;
            }
        } 
        else 
        {
            printf("\nInvalid choice. You hesitate, and Khotun Khan takes advantage!\n");
            int damageToPlayer = rand() % 30 + 10;
            printf("He strikes you, dealing %d damage!\n", damageToPlayer);
            playerHealth -= damageToPlayer;
        }

        printf("\n--- Current Health ---\n");
        printf("%s: %d HP\n", name, playerHealth);
        printf("Khotun Khan: %d HP\n\n", khanHealth);

        if (khanHealth <= 0) 
        {
            printf("\nWith a final, powerful strike, you bring Khotun Khan to his knees.\n");
            printf("He looks up at you, defeated and gasping for breath.\n");
            printf("Khotun Khan: 'You… are stronger than I thought. But the Mongols… will return.'\n");
            printf("\nWith a decisive blow, you end his tyranny, securing Tsushima's future.\n");
            printf("\nCongratulations, %s! You have vanquished Khotun Khan and fulfilled your destiny as a true warrior of Tsushima.\n", name);
            printf("   Khotun Khan’s head lies severed and lifeless.\n");
            printf("   Blood pools beneath, marking the end of his reign.\n");
            printf("   The silence speaks of victory. Tsushima is free.\n\n");
            printf("\n As you go ahead to free your uncle, He looks at you horrified and says 'I Trained you to fight with Honor, this is not it %s.\n", name);
            printf("You reply 'Honor died the day Mongols invaded our Home, The Khan Deserved to suffer.'\n");
            break;
        } 
        else if (playerHealth <= 0) 
        {
            printf("\nYou fight valiantly, but Khotun Khan’s might proves overwhelming.\n");
            printf("As your vision fades, you see your uncle calling out, and the last thing you hear is the laughter of Khotun Khan...\n");
            printf("\nYou have fallen, but Tsushima's spirit endures.\n");
            printf("\n--- GAME OVER ---\n");
            break;
        }
    }
}