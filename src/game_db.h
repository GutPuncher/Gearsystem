/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef GAME_DB_H
#define	GAME_DB_H

#define GS_DB_CODEMASTERS_MAPPER 1
#define GS_DB_DEFAULT_MAPPER 0
#define GS_DB_SG1000_MAPPER 2
#define GS_DB_MSX_MAPPER 3
#define GS_DB_KOREAN_MAPPER 4
#define GS_DB_JANGGUN_MAPPER 5

struct GS_GameDBEntry
{
    u32 crc;
    u8 mapper;
    bool pal;
    bool sms_mode;
    bool no_battery;
    const char* title;
};

const GS_GameDBEntry kGameDatabase[] =
{
    // CODEMASTERS MAPPER, PAL TIMING
    {0x29822980, GS_DB_CODEMASTERS_MAPPER, true, false, false, "Cosmic Spacehead"},
    {0x8813514b, GS_DB_CODEMASTERS_MAPPER, true, false, false, "Excellent Dizzy Collection [Proto]"},
    {0xb9664ae1, GS_DB_CODEMASTERS_MAPPER, true, false, false, "Fantastic Dizzy"},
    {0xa577ce46, GS_DB_CODEMASTERS_MAPPER, true, false, false, "Micro Machines"},
    
    // CODEMASTERS MAPPER, NTSC TIMING, SMS MODE
    {0xc888222b, GS_DB_CODEMASTERS_MAPPER, false, true, false, "Fantastic Dizzy [SMS-GG]"},
    {0xaa140c9c, GS_DB_CODEMASTERS_MAPPER, false, true, false, "Excellent Dizzy Collection, The [SMS-GG]"},
    {0x76C5BDFB, GS_DB_CODEMASTERS_MAPPER, false, true, false, "Jang Pung 2 [SMS-GG]"},

    // CODEMASTERS MAPPER, NTSC TIMING
    {0x72981057, GS_DB_CODEMASTERS_MAPPER, false, false, false, "CJ Elephant Fugitive"},
    {0x6caa625b, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Cosmic Spacehead [GG]"},
    {0xea5C3a6f, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Dinobasher - Starring Bignose the Caveman"},
    {0x152f0dcc, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Dropzone (Archer MacLean's)"},
    {0x5e53c7f7, GS_DB_CODEMASTERS_MAPPER, false, false, true,  "Ernie Els Golf"},
    {0xD9A7F170, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Man Overboard!"},
    {0xdbe8895c, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Micro Machines 2: Turbo Tournament"},
    {0xF7C524F6, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Micro Machines [GG]"},
    {0xC1756BEE, GS_DB_CODEMASTERS_MAPPER, false, false, false, "Pete Sampras Tennis"},
    
    // PAL
    {0x72420F38, GS_DB_DEFAULT_MAPPER, true, false, false, "Addams Family, The"},
    {0x887D9F6B, GS_DB_DEFAULT_MAPPER, true, false, false, "Ace of Aces"},
    {0x8B43D21D, GS_DB_DEFAULT_MAPPER, true, false, false, "Air Rescue"},
    {0xC8718D40, GS_DB_DEFAULT_MAPPER, true, false, false, "Aladdin"},
    {0xB618B144, GS_DB_DEFAULT_MAPPER, true, false, false, "Alien 3"},
    {0x7F30F793, GS_DB_DEFAULT_MAPPER, true, false, false, "Alien Storm"},
    {0xF499034D, GS_DB_DEFAULT_MAPPER, true, false, false, "Andre Agassi Tennis"},
    {0xE4163163, GS_DB_DEFAULT_MAPPER, true, false, false, "Arcade Smash Hits"},
    {0x861B6E79, GS_DB_DEFAULT_MAPPER, true, false, false, "Assault City (Light Phaser)"},
    {0x0BD8DA96, GS_DB_DEFAULT_MAPPER, true, false, false, "Assult City (Joypad)"},
    {0x147E02FA, GS_DB_DEFAULT_MAPPER, true, false, false, "Asterix 1.0"},
    {0x8C9D5BE8, GS_DB_DEFAULT_MAPPER, true, false, false, "Asterix 1.1"},
    {0xF9B7D26B, GS_DB_DEFAULT_MAPPER, true, false, false, "Asterix and the Great Rescue"},
    {0xDEF9B14E, GS_DB_DEFAULT_MAPPER, true, false, false, "Asterix and the Secret Mission"},
    {0xE890331D, GS_DB_DEFAULT_MAPPER, true, false, false, "Ayrton Senna's Super Monaco GP II"},
    {0xE5FF50D8, GS_DB_DEFAULT_MAPPER, true, false, false, "Back to the Future Part II"},
    {0x2D48C1D3, GS_DB_DEFAULT_MAPPER, true, false, false, "Back to the Future Part III"},
    {0x655FB1F4, GS_DB_DEFAULT_MAPPER, true, false, false, "Bank Panic"},
    {0x0DF8597F, GS_DB_DEFAULT_MAPPER, true, false, false, "Basketball nightmare"},
    {0x1CBB7BF1, GS_DB_DEFAULT_MAPPER, true, false, false, "Battlemaniacs"},
    {0xC19430CE, GS_DB_DEFAULT_MAPPER, true, false, false, "Battle Outrun"},
    {0xB154EC38, GS_DB_DEFAULT_MAPPER, true, false, false, "Batman Returns"},
    {0xCAEA8002, GS_DB_DEFAULT_MAPPER, true, false, false, "Bonanza Bros."},
    {0xB0FC4577, GS_DB_DEFAULT_MAPPER, true, false, false, "Buggy Run"},
    {0xC0E25D62, GS_DB_DEFAULT_MAPPER, true, false, false, "California Games II"},
    {0x23163A12, GS_DB_DEFAULT_MAPPER, true, false, false, "Champions of Europe"},
    {0x7E5839A0, GS_DB_DEFAULT_MAPPER, true, false, false, "Championship Hockey"},
    {0x85CFC9C9, GS_DB_DEFAULT_MAPPER, true, false, false, "Chase H.Q."},
    {0x46340C41, GS_DB_DEFAULT_MAPPER, true, false, false, "Cheese Cat-Astrophe Starring Speedy Gonzales"},
    {0xDD0E2927, GS_DB_DEFAULT_MAPPER, true, false, false, "Chuck Rock"},
    {0xC30E690A, GS_DB_DEFAULT_MAPPER, true, false, false, "Chuck Rock II: Son of Chuck"},
    {0x13AC9023, GS_DB_DEFAULT_MAPPER, true, false, false, "Cool Spot"},
    {0x71ABEF27, GS_DB_DEFAULT_MAPPER, true, false, false, "Daffy Duck in Hollywood"},
    {0xAE4A28D7, GS_DB_DEFAULT_MAPPER, true, false, false, "Danan: The Jungle Fighter"},
    {0x42FC3A6E, GS_DB_DEFAULT_MAPPER, true, false, false, "Deep Duck Trouble Starring Donald Duck"},
    {0x6C1433F9, GS_DB_DEFAULT_MAPPER, true, false, false, "Desert Strike"},
    {0x8370F6CD, GS_DB_DEFAULT_MAPPER, true, false, false, "Double Hawk"},
    {0x1B10A951, GS_DB_DEFAULT_MAPPER, true, false, false, "Dracula (Bram Stoker's)"},
    {0x6C696221, GS_DB_DEFAULT_MAPPER, true, false, false, "Dr. Robotnik's Mean Bean Machine"},
    {0x9549FCE4, GS_DB_DEFAULT_MAPPER, true, false, false, "Dragon Crystal"},
    {0xC88A5064, GS_DB_DEFAULT_MAPPER, true, false, false, "Dragon: The Bruce Lee Story"},
    {0x07306947, GS_DB_DEFAULT_MAPPER, true, false, false, "Dynamite Duke"},
    {0x0E1CC1E0, GS_DB_DEFAULT_MAPPER, true, false, false, "Dynamite Dux"},
    {0x6687FAB9, GS_DB_DEFAULT_MAPPER, true, false, false, "Ecco the Dolphin"},
    {0xEC788661, GS_DB_DEFAULT_MAPPER, true, false, false, "F1"},
    {0xF6AD7B1D, GS_DB_DEFAULT_MAPPER, true, false, false, "Fire & Forget II"},
    {0xCA5C78A5, GS_DB_DEFAULT_MAPPER, true, false, false, "Flinstones"},
    {0x38C53916, GS_DB_DEFAULT_MAPPER, true, false, false, "Forgotten Worlds"},
    {0x3EC5E627, GS_DB_DEFAULT_MAPPER, true, false, false, "Gain Ground"},
    {0xD9190956, GS_DB_DEFAULT_MAPPER, true, false, false, "Gauntlet"},
    {0xB67CEB76, GS_DB_DEFAULT_MAPPER, true, false, false, "Global Gladiators"},
    {0x05CDC24E, GS_DB_DEFAULT_MAPPER, true, false, false, "G-LOC: Air Battle"},
    {0x48651325, GS_DB_DEFAULT_MAPPER, true, false, false, "Golf Mania"},
    {0xEC2DA554, GS_DB_DEFAULT_MAPPER, true, false, false, "GP Rider"},
    {0xCDE13FFB, GS_DB_DEFAULT_MAPPER, true, false, false, "Heroes of the Lance"},
    {0xC9DBF936, GS_DB_DEFAULT_MAPPER, true, false, false, "Home Alone"},
    {0x64D6AF3B, GS_DB_DEFAULT_MAPPER, true, false, false, "Impossible Mission"},
    {0xB4584DDE, GS_DB_DEFAULT_MAPPER, true, false, false, "Incredible Crash Dummies"},
    {0xBE9A7071, GS_DB_DEFAULT_MAPPER, true, false, false, "Incredible Hulk"},
    {0x8AEB574B, GS_DB_DEFAULT_MAPPER, true, false, false, "Indiana Jones and the Last Crusade: The Action Game"},
    {0x8D23587F, GS_DB_DEFAULT_MAPPER, true, false, false, "James Bond 007: The Duel"},
    {0x695A9A15, GS_DB_DEFAULT_MAPPER, true, false, false, "Jungle Book"},
    {0x0667ED9F, GS_DB_DEFAULT_MAPPER, true, false, false, "Jurassic Park"},
    {0x45C50294, GS_DB_DEFAULT_MAPPER, true, false, false, "Jogos de Verao II (BR)"},
    {0x2B435FD6, GS_DB_DEFAULT_MAPPER, true, false, false, "Klax"},
    {0x64A585EB, GS_DB_DEFAULT_MAPPER, true, false, false, "Krusty's Fun House"},
    {0x24E97200, GS_DB_DEFAULT_MAPPER, true, false, false, "Land of Illusion Starring Mickey Mouse"},
    {0x0CA95637, GS_DB_DEFAULT_MAPPER, true, false, false, "Laser Ghost"},
    {0xF369B2D8, GS_DB_DEFAULT_MAPPER, true, false, false, "Lemmings"},
    {0xCB09F355, GS_DB_DEFAULT_MAPPER, true, false, false, "Line of Fire"},
    {0xC352C7EB, GS_DB_DEFAULT_MAPPER, true, false, false, "Lion King"},
    {0xA1710F13, GS_DB_DEFAULT_MAPPER, true, false, false, "Lucky Dime Caper Starring Donald Duck"},
    {0xBF6F3E5F, GS_DB_DEFAULT_MAPPER, true, false, false, "Marble Madness"},
    {0x96FB4D4B, GS_DB_DEFAULT_MAPPER, true, false, false, "Master of Darkness"},
    {0x93141463, GS_DB_DEFAULT_MAPPER, true, false, false, "Masters of Combat"},
    {0xD7416B83, GS_DB_DEFAULT_MAPPER, true, false, false, "Mercs"},
    {0x302DC686, GS_DB_DEFAULT_MAPPER, true, false, false, "Mortal Kombat"},
    {0x2663BF18, GS_DB_DEFAULT_MAPPER, true, false, false, "Mortal Kombat II"},
    {0x3CD816C6, GS_DB_DEFAULT_MAPPER, true, false, false, "Ms. Pac-Man"},
    {0x332A847D, GS_DB_DEFAULT_MAPPER, true, false, false, "NBA Jam [Proto]"},
    {0x1B1D8CC2, GS_DB_DEFAULT_MAPPER, true, false, false, "Ninja Gaiden"},
    {0xC660FF34, GS_DB_DEFAULT_MAPPER, true, false, false, "NewZealand Story"},
    {0x6A5A1E39, GS_DB_DEFAULT_MAPPER, true, false, false, "Olympic Gold: Barcelona '92"},
    {0x205caae8, GS_DB_DEFAULT_MAPPER, true, false, false, "Operation Wolf"},
    {0x82EF2A7D, GS_DB_DEFAULT_MAPPER, true, false, false, "Ottifants"},
    {0xD6F43DDA, GS_DB_DEFAULT_MAPPER, true, false, false, "Outrun 3D"},
    {0x3932ADBC, GS_DB_DEFAULT_MAPPER, true, false, false, "Out Run Europa"},
    {0xBE57A9A5, GS_DB_DEFAULT_MAPPER, true, false, false, "Pac-Mania"},
    {0x95B9EA95, GS_DB_DEFAULT_MAPPER, true, false, false, "PGA Tour Golf"},
    {0xB840A446, GS_DB_DEFAULT_MAPPER, true, false, false, "Pit-Fighter"},
    {0xC7A1FDEF, GS_DB_DEFAULT_MAPPER, true, false, false, "Populous"},
    {0x0047b615, GS_DB_DEFAULT_MAPPER, true, false, false, "Predator 2"},
    {0xA109A6FE, GS_DB_DEFAULT_MAPPER, true, false, false, "Power Strike 2"},
    {0x7704287D, GS_DB_DEFAULT_MAPPER, true, false, false, "Prince of Persia"},
    {0x5C0B1F0F, GS_DB_DEFAULT_MAPPER, true, false, false, "Psychic World"},
    {0x357D4F78, GS_DB_DEFAULT_MAPPER, true, false, false, "Putt & Putter"},
    {0xF42E145C, GS_DB_DEFAULT_MAPPER, true, false, false, "Quest for the Shaven Yak Starring Ren Hoëk & Stimpy"},
    {0xC172A22C, GS_DB_DEFAULT_MAPPER, true, false, false, "Rainbow Islands"},
    {0x426E5C8A, GS_DB_DEFAULT_MAPPER, true, false, false, "Rampart"},
    {0x3BE7F641, GS_DB_DEFAULT_MAPPER, true, false, false, "Renegade"},
    {0xB876FC74, GS_DB_DEFAULT_MAPPER, true, false, false, "Road Rash"},
    {0x9F951756, GS_DB_DEFAULT_MAPPER, true, false, false, "RoboCop 3"},
    {0x8212B754, GS_DB_DEFAULT_MAPPER, true, false, false, "RoboCop Versus The Terminator"},
    {0x1FDAE719, GS_DB_DEFAULT_MAPPER, true, false, false, "Running Battle"},
    {0x66388128, GS_DB_DEFAULT_MAPPER, true, false, false, "Sagaia"},
    {0x9A8B28EC, GS_DB_DEFAULT_MAPPER, true, false, false, "Scramble Spirits"},
    {0xA8061AEF, GS_DB_DEFAULT_MAPPER, true, false, false, "Sega Chess"},
    {0x296879DD, GS_DB_DEFAULT_MAPPER, true, false, false, "Sega World Tournament Golf"},
    {0xF8176918, GS_DB_DEFAULT_MAPPER, true, false, false, "Sensible Soccer"},
    {0x3793C01A, GS_DB_DEFAULT_MAPPER, true, false, false, "Shadow Dancer"},
    {0x1575581D, GS_DB_DEFAULT_MAPPER, true, false, false, "Shadow of the Beast"},
    {0xE0B1AFF8, GS_DB_DEFAULT_MAPPER, true, false, false, "Smash TV"},
    {0x97E5BB7D, GS_DB_DEFAULT_MAPPER, true, false, false, "Smurfs 2: Travel the World"},
    {0x11C1BC8A, GS_DB_DEFAULT_MAPPER, true, false, false, "Sonic Spinball"},
    {0x96B3F29E, GS_DB_DEFAULT_MAPPER, true, false, false, "Sonic Blast"},
    {0x5B3B922C, GS_DB_DEFAULT_MAPPER, true, false, false, "Sonic The Hedgehog 2 [v0]"},
    {0xD6F2BFCA, GS_DB_DEFAULT_MAPPER, true, false, false, "Sonic The Hedgehog 2 [v1]"},
    {0xA908CFF5, GS_DB_DEFAULT_MAPPER, true, false, false, "Space Gun"},
    {0xCA1D3752, GS_DB_DEFAULT_MAPPER, true, false, false, "Space Harrier"},
    {0xFA8E4CA0, GS_DB_DEFAULT_MAPPER, true, false, false, "Special Criminal Investigation"},
    {0x5CCC1A65, GS_DB_DEFAULT_MAPPER, true, false, false, "Speedball (Virgin)"},
    {0xA57CAD18, GS_DB_DEFAULT_MAPPER, true, false, false, "Speedball (Mirrorsoft)"},
    {0x0C7366A0, GS_DB_DEFAULT_MAPPER, true, false, false, "Speedball 2"},
    {0xEBE45388, GS_DB_DEFAULT_MAPPER, true, false, false, "Spider-Man: Return of the Sinister Six"},
    {0xD4B8F66D, GS_DB_DEFAULT_MAPPER, true, false, false, "Star Wars"},
    {0x4AB3790F, GS_DB_DEFAULT_MAPPER, true, false, false, "Streets of Rage"},
    {0x04E9C089, GS_DB_DEFAULT_MAPPER, true, false, false, "Streets of Rage 2"},
    {0xB8F0915A, GS_DB_DEFAULT_MAPPER, true, false, false, "Strider II"},
    {0xD8F2F1B9, GS_DB_DEFAULT_MAPPER, true, false, false, "Submarine Attack"},
    {0x8DA5C93F, GS_DB_DEFAULT_MAPPER, true, false, false, "Summer Games"},
    {0x406AA0C2, GS_DB_DEFAULT_MAPPER, true, false, false, "Super Kick-Off"},
    {0x54F68C2A, GS_DB_DEFAULT_MAPPER, true, false, false, "Super Off Road"},
    {0x1D6244EE, GS_DB_DEFAULT_MAPPER, true, false, false, "Super Space Invaders"},
    {0x6F9AC98F, GS_DB_DEFAULT_MAPPER, true, false, false, "Superman: The Man of Steel"},
    {0x93CA8152, GS_DB_DEFAULT_MAPPER, true, false, false, "T2: The Arcade Game"},
    {0x7CC3E837, GS_DB_DEFAULT_MAPPER, true, false, false, "Taz-Mania"},
    {0x5A1C3DDE, GS_DB_DEFAULT_MAPPER, true, false, false, "Tecmo World Cup '93"},
    {0x1A390B93, GS_DB_DEFAULT_MAPPER, true, false, false, "Tennis Ace"},
    {0xEDC5C012, GS_DB_DEFAULT_MAPPER, true, false, false, "Terminator"},
    {0xAC56104F, GS_DB_DEFAULT_MAPPER, true, false, false, "Terminator 2: Judgment Day"},
    {0xD1CC08EE, GS_DB_DEFAULT_MAPPER, true, false, false, "The Simpsons: Bart vs. the Space Mutants"},
    {0xF6B2370A, GS_DB_DEFAULT_MAPPER, true, false, false, "The Simpsons: Bart vs. the World"},
    {0xBF7B7285, GS_DB_DEFAULT_MAPPER, true, false, false, "Tom & Jerry: The Movie"},
    {0xE5374022, GS_DB_DEFAULT_MAPPER, true, false, false, "Trivial Pursuit: Genus Edition"},
    {0xB52D60C8, GS_DB_DEFAULT_MAPPER, true, false, false, "Ultima IV: Quest of the Avatar"},
    {0x15668CA4, GS_DB_DEFAULT_MAPPER, true, false, false, "Ultimate Soccer"},
    {0x912D92AF, GS_DB_DEFAULT_MAPPER, true, false, false, "Wimbledon"},
    {0x7F3AFE58, GS_DB_DEFAULT_MAPPER, true, false, false, "Wimbledon 2"},
    {0xA20290B6, GS_DB_DEFAULT_MAPPER, true, false, false, "Winter Olympics: Lillehammer 94"},
    {0x1F8EFA1D, GS_DB_DEFAULT_MAPPER, true, false, false, "Wolfchild"},
    {0x7D7CE80B, GS_DB_DEFAULT_MAPPER, true, false, false, "Wonder Boy in Monster World"},
    {0xC9A449B7, GS_DB_DEFAULT_MAPPER, true, false, false, "World Class Leader Board"},
    {0x6E1AD6FD, GS_DB_DEFAULT_MAPPER, true, false, false, "World Cup Italia '90"},
    {0xA6BF8F9E, GS_DB_DEFAULT_MAPPER, true, false, false, "World Cup USA '94"},
    {0xA2A60BC8, GS_DB_DEFAULT_MAPPER, true, false, false, "World Games"},
    {0x2DB21448, GS_DB_DEFAULT_MAPPER, true, false, false, "WWF WrestleMania: Steel Cage Challenge"},
    {0x5C205EE1, GS_DB_DEFAULT_MAPPER, true, false, false, "Xenon 2 (Image Works)"},
    {0xEC726C0D, GS_DB_DEFAULT_MAPPER, true, false, false, "Xenon 2 (Virgin)"},
    {0x9D9D0A5F, GS_DB_DEFAULT_MAPPER, true, false, false, "Zool"},

    // SMS MODE
    {0x6F8E46CF, GS_DB_DEFAULT_MAPPER, false, true, false, "Alex Kidd in Miracle World [SMS-GG]"},
    {0x59840FD6, GS_DB_DEFAULT_MAPPER, false, true, false, "Castle of Illusion - Starring Mickey Mouse [SMS-GG]"},
    {0x9942B69B, GS_DB_DEFAULT_MAPPER, false, true, false, "Castle of Illusion - Starring Mickey Mouse [SMS-GG]"},
    {0x44FBE8F6, GS_DB_DEFAULT_MAPPER, false, true, false, "Chase H.Q. [SMS-GG]"},
    {0xA2F9C7AF, GS_DB_DEFAULT_MAPPER, false, true, false, "Olympic Gold [B] [SMS-GG]"},
    {0x3382D73F, GS_DB_DEFAULT_MAPPER, false, true, false, "Olympic Gold [TW] [SMS-GG]"},
    {0x1D93246E, GS_DB_DEFAULT_MAPPER, false, true, false, "Olympic Gold [A] [SMS-GG]"},
    {0xF037EC00, GS_DB_DEFAULT_MAPPER, false, true, false, "Out Run Europa (US) [SMS-GG]"},
    {0x01EAB89D, GS_DB_DEFAULT_MAPPER, false, true, false, "Out Run Europa [SMS-GG]"},
    {0xE5F789B9, GS_DB_DEFAULT_MAPPER, false, true, false, "Predator 2 [SMS-GG]"},
    {0x311D2863, GS_DB_DEFAULT_MAPPER, false, true, false, "Prince of Persia [A] [SMS-GG]"},
    {0x45F058D6, GS_DB_DEFAULT_MAPPER, false, true, false, "Prince of Persia [B][SMS-GG]"},
    {0x56201996, GS_DB_DEFAULT_MAPPER, false, true, false, "R.C. Grand Prix [SMS-GG]"},
    {0x9C76FB3A, GS_DB_DEFAULT_MAPPER, false, true, false, "Rastan Saga [SMS-GG]"},
    {0x10DBBEF4, GS_DB_DEFAULT_MAPPER, false, true, false, "Super Kick Off [SMS-GG]"},
    {0x7BB81E3D, GS_DB_DEFAULT_MAPPER, false, true, false, "Taito Chase H.Q. [SMS-GG]"},
    {0xC8381DEF, GS_DB_DEFAULT_MAPPER, false, true, false, "Taito Chase H.Q. [SMS-GG]"},
    {0xDA8E95A9, GS_DB_DEFAULT_MAPPER, false, true, false, "WWF Wrestlemania Steel Cage Challenge [SMS-GG]"},
    
    // RAM without battery
    {0xBE31D63F, GS_DB_DEFAULT_MAPPER, true,  false, true, "Flash, The"},
    {0xB137007A, GS_DB_DEFAULT_MAPPER, false, false, true, "Desert Speedtrap"},
    {0xC2E111AC, GS_DB_DEFAULT_MAPPER, false, false, true, "Desert Speedtrap"},
    {0xEC808026, GS_DB_DEFAULT_MAPPER, false, false, true, "Desert Speedtrap"},

    // KOREAN MAPPER
    {0x89B79E77, GS_DB_KOREAN_MAPPER, false, false, false, "Dallyeora Pigu-Wang (Korean)"},
    {0x97D03541, GS_DB_KOREAN_MAPPER, false, false, false, "Sangokushi 3 (Korean)"},
    {0x89B79E77, GS_DB_KOREAN_MAPPER, false, false, false, "Dodgeball King (KR)"},
    {0x929222C4, GS_DB_KOREAN_MAPPER, false, false, false, "Jang Pung II (KR)"},
    {0x18FB98A3, GS_DB_KOREAN_MAPPER, false, false, false, "Jang Pung 3 (KR)"},

    // MSX MAPPER
    {0x445525E2, GS_DB_MSX_MAPPER, false, false, false, "Penguin Adventure (KR)"},
    {0x83F0EEDE, GS_DB_MSX_MAPPER, false, false, false, "Street Master (KR)"},
    {0xA05258F5, GS_DB_MSX_MAPPER, false, false, false, "Won-Si-In (KR)"},
    {0x06965ED9, GS_DB_MSX_MAPPER, false, false, false, "F-1 Spirit - The way to Formula-1 (KR)"},
    {0x77EFE84A, GS_DB_MSX_MAPPER, false, false, false, "Cyborg Z (KR)"},
    {0xF89AF3CC, GS_DB_MSX_MAPPER, false, false, false, "Knightmare II - The Maze of Galious (KR)"},
    {0x9195C34C, GS_DB_MSX_MAPPER, false, false, false, "Super Boy 3 (KR)"},
    {0xE316C06D, GS_DB_MSX_MAPPER, false, false, false, "Nemesis (KR)"},
    {0x0A77FA5E, GS_DB_MSX_MAPPER, false, false, false, "Nemesis 2 (KR)"},

    // JANGGUN MAPPER
    {0x192949D5, GS_DB_JANGGUN_MAPPER, false, false, false, "Janggun-ui Adeul (KR)"},

    // SG-1000 with RAM without battery
    {0x092F29D6, GS_DB_SG1000_MAPPER, false, false, true,  "Castle, The (J)"},
    {0x2E366CCF, GS_DB_SG1000_MAPPER, false, false, true,  "Castle, The (T)"},
    {0x223397A1, GS_DB_SG1000_MAPPER, false, false, true,  "King's Valley"},
    {0xAF4F14BC, GS_DB_SG1000_MAPPER, false, false, true,  "Othello (J)"},
    {0x1D1A0CA3, GS_DB_SG1000_MAPPER, false, false, true,  "Othello (T)"},
    {0x49E9718B, GS_DB_SG1000_MAPPER, false, false, false, "Safari Hunting (JE)"},
    {0x6DC51C01, GS_DB_SG1000_MAPPER, false, false, false, "Safari Hunting (T)"},
        
    {0, 0, false, false, false, 0}
};

const uint32_t kCRC32_tab[] = 
{
	0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f,
	0xe963a535, 0x9e6495a3,	0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
	0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91, 0x1db71064, 0x6ab020f2,
	0xf3b97148, 0x84be41de,	0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
	0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec,	0x14015c4f, 0x63066cd9,
	0xfa0f3d63, 0x8d080df5,	0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
	0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,	0x35b5a8fa, 0x42b2986c,
	0xdbbbc9d6, 0xacbcf940,	0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
	0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423,
	0xcfba9599, 0xb8bda50f, 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
	0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,	0x76dc4190, 0x01db7106,
	0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
	0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d,
	0x91646c97, 0xe6635c01, 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
	0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457, 0x65b0d9c6, 0x12b7e950,
	0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
	0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7,
	0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
	0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9, 0x5005713c, 0x270241aa,
	0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
	0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81,
	0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
	0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683, 0xe3630b12, 0x94643b84,
	0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
	0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb,
	0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
	0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5, 0xd6d6a3e8, 0xa1d1937e,
	0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
	0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55,
	0x316e8eef, 0x4669be79, 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
	0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, 0xc5ba3bbe, 0xb2bd0b28,
	0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
	0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f,
	0x72076785, 0x05005713, 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
	0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242,
	0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
	0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69,
	0x616bffd3, 0x166ccf45, 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
	0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db, 0xaed16a4a, 0xd9d65adc,
	0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
	0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693,
	0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
	0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
};

u32 CalculateCRC32(u32 crc, const u8 *buf, int size)
{
	const u8 *p;

	p = buf;
	crc = crc ^ ~0U;

	while (size--)
		crc = kCRC32_tab[(crc ^ *p++) & 0xFF] ^ (crc >> 8);

	return crc ^ ~0U;
}

#endif	/* GAME_DB_H */

