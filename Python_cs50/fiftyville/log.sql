-- Keep a log of any SQL queries you execute as you solve the mystery.

-- SELECT description, street FROM crime_scene_reports WHERE id = 295;

-- SELECT transcript, name FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;

-- SELECT license_plate, activity, minute FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10;

-- SELECT duration FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration <= 60;

-- SELECT account_number, amount FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';

-- SELECT * FROM flights WHERE day = 29 AND month = 7 AND origin_airport_id = 8 ORDER BY hour;

SELECT caller
FROM phone_calls
WHERE caller
    IN (SELECT name
        FROM people
        WHERE license_plate 
            IN (SELECT license_plate 
                FROM bakery_security_logs 
                WHERE license_plate 
                IN (SELECT license_plate 
                    FROM people 
                    WHERE passport_number 
                    IN (SELECT passport_number 
                        FROM passengers 
                        WHERE flight_id = 36))
                AND month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND minute > 15))
AND duration < 60;