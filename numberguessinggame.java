// java number guessing game
import java.util.Scanner;

public class numberguessinggame {
    public static void main(String arg[])
	{
		guessNumber();
        aftergame();
	}


	public static void guessNumber()
	{
		Scanner sc = new Scanner(System.in);

		// create numbers 
		int number = (int)(100* Math.random())+1;
		int K = 5;
		int i, guess;

		System.out.println("A number is chosen between 1 to 100. Guess the number within 5 tries.");

		// you get K number of tries
		for (i = 0; i < K; i++) {

			System.out.println("Guess the number:");
			// input for guessing
			guess = sc.nextInt();

			//if number is guessed
			if (number == guess) {
				System.out.println("Congratulations! You guessed the number.");
				break;
			}

			//hints number
			else if (number > guess && i != K - 1) {
				System.out.println("The number is greater than " + guess);
			}
			else if (number < guess && i != K - 1) {
				System.out.println("The number is less than " + guess);
			}
		}

		//if all K tries are used
		if (i == K) {
			System.out.println("You have used all 5 trials.");

			System.out.println("The number was " + number);
		}
	}
    public static void aftergame(){
        Scanner in = new Scanner(System.in);
        System.out.println("did you like the game?");
        String answer;
        answer=in.nextLine();

        if(answer.equals("yes")){
            System.out.println("epic");
        }
        else{
            System.out.println(":(");
        }
        
    }
}
