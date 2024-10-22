interface Shape {
    public double area();
    public double numberOfSides();
    public void shapeName();
}

class Circle implements Shape {
    double radius;

    public Circle(int r) {
        radius = r;
    }

    public double area() {
        return 3.14 * radius * radius;
    }
    public double numberOfSides() {
        return 0;
    }
    public void shapeName() {
        System.err.println("Circle");
    }
}

abstract class Triangle implements Shape {
    public double numberOfSides() {
        return 3;
    }

    public void shapeName() {
        System.out.println("Triangle");;
    }

    public abstract double area();
}

class Equilateral extends Triangle {
    double side;

    public Equilateral(int a) {
        side = a;
    }

    public double area() {
        return (1.732 * side * side) / 4;
    }

    public void shapeName() {
        System.out.println("Equilateral Triangle");
    }
}

class Isosceles extends Triangle {
    double side1, side2;

    public Isosceles(int a, int b) {
        side1 = a;
        side2 = b;
    }

    public double area() {
        return (side1 * side1) / 2;
    }

    public void shapeName() {
        System.out.println("Isosceles Triangle");
    }
}

class Scalene extends Triangle {
    double side1, side2, side3;

    public Scalene(int a, int b, int c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    public double area() {
        return side1 * side2 * side3;
    }

    public void shapeName() {
        System.out.println("Scalene Triangle");
    }
}

abstract class Quadrilateral implements Shape {
    public double numberOfSides() {
        return 4;
    }

    public void shapeName() {
        System.err.println("Quadrilateral");
    }

    public abstract double area();
}

class Rectangle extends Quadrilateral {
    double length, breath;

    public Rectangle(double a, double b) {
        length = a;
        breath = b;
    }

    public double area() {
        return length * breath;
    }

    public void shapeName() {
        System.out.println("Rectangle");
    }
}

class Square extends Rectangle {
    double side;

    public Square(int a) {
        super(a, a);
        side = a;
    }

    public void shapeName() {
        System.out.println("Square");
    }
}

class Parallelogram extends Quadrilateral {
    double base, height;

    public Parallelogram(int a, int b) {
        base = a;
        height = b;
    }

    public double area() {
        return base * height;
    }

    public void shapeName() {
        System.out.println("Parallelogram");
    }
}

class Trapezium extends Quadrilateral  {
    double length, breath, height;

    public Trapezium(int a, int b, int h) {
        length = a;
        breath = b;
        height = h;
    }

    public double area() {
        return ((length + breath) * height) / 2;
    }

    public void shapeName() {
        System.out.println("Trapezium");
    }
}

class Main 
{
	public static void main (String[] args)
	{
		Shape s = new Square(5);
		System.out.println(s.area());
		System.out.println(s.numberOfSides());
		s.shapeName();
	}
}
