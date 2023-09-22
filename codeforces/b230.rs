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

fn precompute() -> Vec<bool> {
    const LENGTH: usize = 1000001;
    let mut look_up: Vec<bool> = Vec::<bool>::with_capacity(LENGTH);
    for _ in 0..4 {
        look_up.push(true);
    }
    for i in 4..LENGTH {
        let sqrt = ((i as f64).sqrt()).ceil() as usize + 1;
        for j in 2..(sqrt + 1) {
            if i % j == 0 && i != j {
                look_up.push(false);
                break;
            }
            if j == sqrt {
                look_up.push(true);
            }
        }
    }
    look_up
}

fn main() {
    let look_up: Vec<bool> = precompute();
    let input = read_line_of_usize(1);
    let n: usize = input[0] as usize;

    let number_vec: Vec<i64> = read_line_of_usize(n);

    for i in 0..n {
        let sqrt = (number_vec[i] as f64).sqrt() as i64;
        if look_up[sqrt as usize] && 1 != sqrt && sqrt * sqrt == number_vec[i] {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
