package katas.first.batch;

/**
 * Created by viskyo on 8/14/2015.
 */
public class Kata14 {

    public static Human[] create(){

        return new Human[] {new Man("Adam", Human.Gender.MALE), new Woman("Eve", Human.Gender.FEMALE)};
    }
}

class Human {

    enum Gender {MALE, FEMALE};
}

class Man extends Human {

    Gender g = Gender.MALE;
    String name;

    public Man(String name, Gender g) {
        this.g = g;
        this.name = name;
    }
}

class Woman extends Human {

    Gender g = Gender.FEMALE;
    String name;

    public Woman(String name, Gender g) {
        this.name = name;
        this.g = g;
    }
}
