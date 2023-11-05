
# Chess Game
 
 > Authors: \[Martin De Guzman, ](https://github.com/KuYuh02)\, \[David Aispuro, ](https://github.com/DavidA346)\, \[Michael Mihalovich, ](https://github.com/michaelm015)\, \<[Sarik Raj Karki, ](https://github.com/Eros846)\>

## Project Description
 > * One of the reasons this project is interesting is it exposes us to working with both front end and back end development. It also deals with security via account information and is an exciting challenge. We also love the fact that despite chess being a simple game, there is a lot of features we can implement features to make it more convenenient, entertaining, etc. Features that are not possible to implement in real life chess. 
 > * We plan to code our backend/the main game in C++ and code the website in HTML and CSS. 
 > * The project will take many different inputs. For example, on the landing page, it will take user login information such as email and password. As for the game itself, it will take user mouse and click input to play the game. 
 > * The project will have a website to make an account, learn the rules of chess, see game history, see move history, and host the main game. The main chess game will have the same rules of chess with the addition of being able to revert moves.
 >  * The backend of the project will take care of the logic of the chess game. This includes setting up and displaying the pieces and board, creating both a black and white player and determining the legal moves for each piece and whether or not the move can be completed. Finally, it will display the outcome of the game and ask the user to play again.
 >  * The input for this project will be accomplished through the website which will take in a user's account and output it back to them. The user will also need to input for every turn they wish to complete and the output will be that move displayed on the screen.


 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.
> ![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/f4c302fb-97ec-469e-ba0d-29d9faf6b8c9)

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.
## Login page
> ![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/e253a2cd-8339-46fe-af7c-07b81c710f4b)
> - Takes user string as input for username, email, and password -> either continue to main menu if valid, or gives error message if invalid
> - If the user has an account already, they can click the LOGIN button
> 
## Main Menu
> ![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/7a10f005-6ff4-4f1a-8b57-6d20315aa347)

> Key Features:
> - Able to go to any page from this page
> - All pages have interactable buttons via user mouse click
>
## General Layout
> ![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/c8e84cad-f5a2-43f4-ace4-10c9f373f899)
> The Profile, settings, rules, and social menu will have this general layout
> - The profile is the only page to have the logout button
> - Settings page will have video and audio settings
> - Rules page just shows the rules of chess on the screen
> - Social menu will have take the user input of a username to add as a friend
> - All pages will have the option to go back to the main menu
>
## Game page
> ![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/df29810a-db83-4c6e-99c4-1fa68d1add08)
> The game page will have the most features including:
> - Has the option to go back to the main menu too. If the user is currently in a game, it is give the user a message to finish their game first
> - User can click and drage their pieces as their moves in the chess game
> - User has a 5 second window to finalize their move, or they can press the undo button on the bottom right
> - The right side has a live move history between both players. 



## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
