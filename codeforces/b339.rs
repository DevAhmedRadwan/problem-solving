use std::io;

fn read_line_of_i64(length: usize) -> Vec<i64> {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let mut vec_numbers: Vec<i64> = Vec::<i64>::with_capacity(length);
    let parts = input_line.split(" ");
    for part in parts {
        let number: i64 = part.trim().parse().expect("Input not an i64");
        vec_numbers.push(number);
    }
    vec_numbers
}

fn main() {
    let input = read_line_of_i64(2);
    let n: i64 = input[0];
    let m: usize = input[1] as usize;

    let house_vec: Vec<i64> = read_line_of_i64(m);

    let mut time = house_vec[0] - 1;
    for i in 1..m {
        if house_vec[i - 1] < house_vec[i] {
            time += house_vec[i] - house_vec[i - 1];
        } else if house_vec[i - 1] > house_vec[i] {
            time += (n - house_vec[i - 1]) + house_vec[i];
        }
    }
    println!("{}", time);
}
