import java.util.*;

class Arrays{
    public static void main(String[]args){
                      // ARRAYS
        Scanner scanner = new Scanner(System.in);
        
        
        // ADDING ELEMENTS TO AN ARRAY
        // ArrayList<Integer> marks = new ArrayList<Integer>();

        // System.out.println("Enter number of students you would like to input their marks:");
        // int mark = scanner.nextInt();

        // for(int i = 0; i < mark; i++){
        //     System.out.println("Enter marks:");
        //     marks.add (scanner.nextInt());
        // }
        // System.out.println(marks);
        
        
        
        //REVERSE AN ARRAY
        // int []marks = {12, 34, 56, 78, 90, 9, 87, 65, 43, 21};
        // int length = marks.length;
        
        // for(int i = length - 1; i >= 0; i--){
        //     System.out.print(marks[i] + " ");
        // }
        
        
        
        //COUNT EVEN AND ODD NUMBERS IN AN ARRAY
        // int []marks = {12, 34, 56, 78, 90, 9, 87, 65, 43, 21};
        // int length = marks.length;
        
        // for(int i = 0; i < length; i++){
        //     if(marks[i] % 2 == 0){
        //         System.out.println(marks[i] +" - Even");
        //     }
        //     else{
        //         System.out.println(marks[i] + " - Odd");
        //     }
        // }
        
        
        //SEARCH FOR AN ELEMENT
        // String []cars = {"Mazda", "Toyota", "Audi", "Ford", "Ferrari", "Isuzu", "Lamborghini"};
        // int i, length = cars.length;
        // boolean found = false;
        
        // System.out.print("Check if your brand car is in the array:");
        // String brand = scanner.nextLine().toLowerCase();
        // System.out.println();
        
        // for(i = 0; i < length; i++){
        //     if(cars[i].toLowerCase().equals(brand)){
        //         found = true;
        //         break;
        //     }
        // }
        
        // if(found){
        //     System.out.println("Your car brand is in the array in index "+ i + " of the array");
        // }
        // else{
        //     System.out.println("Unfortunately, your car brand is not in the array");
        // }
        
        
        
        //COPY ELEMENTS FROM ONE ARRAY TO ANOTHER
	//int []marks = {12, 34, 56, 78, 90};
	//ArrayList<Integer> marks2 = new ArrayList<Integer>();

	

	//for(int i =0; i < marks.length; i++){
	//	marks2.add(marks[i]);
	//	marks2.add(1);
	//}

	//System.out.println(marks2);
	//System.out.println(marks);

        //FIND DUPLICATE ELEMENTS
	int []arr = {10,20,30,40,50,30};
	
	for(int i =0; i < arr.length; i++){
	    for(int j= i+1; j < arr.length; j++){
		if(arr [i] == arr[j]){
		   System.out.println(arr[i] + " has been duplicated");
		   break;
		}
	    }
	}
        //SORT ELEMENTS IN ASCENDING AND DESCENDING ORDER
        //MERGE TWO ARRAYS

    }
}
