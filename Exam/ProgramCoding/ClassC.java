class ClassC extends ClassA{
	
	static String name ="Class C";
		
	ClassC(int n){
		super(n-1);
		System.out.println("ClassC created");
	}
}