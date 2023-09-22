use std::io;

fn main() {
    let input = read_line_of_usize(2);
    let n: usize = input[0] as usize;
    let l: usize = input[1];

    let mut light_vec: Vec<usize> = read_line_of_usize(n);

    light_vec.sort();

    let mut max_distance: f64 = 0f64;

    for index in 0..n {
        if 0 == index {
            max_distance = f64::max(max_distance, light_vec[index] as f64);
        }
        if (n - 1) == index {
            max_distance = f64::max(max_distance, (l - light_vec[index]) as f64);
        }
        if 0 < index {
            max_distance = f64::max(
                max_distance,
                ((light_vec[index] - light_vec[index - 1]) as f64) / 2f64,
            );
        }
        if (n - 1) > index {
            max_distance = f64::max(
                max_distance,
                ((light_vec[index + 1] - light_vec[index]) as f64) / 2f64,
            );
        }
    }
    println!("{}", max_distance);
}

fn read_line_of_usize(length: usize) -> Vec<usize> {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let mut vec_numbers: Vec<usize> = Vec::<usize>::with_capacity(length);
    let parts = input_line.split(" ");
    for part in parts {
        let number: usize = part.trim().parse().expect("Input not an i32");
        vec_numbers.push(number);
    }
    vec_numbers
}
