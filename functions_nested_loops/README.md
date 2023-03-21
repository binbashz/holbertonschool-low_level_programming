# Nested Loops in C

C supports nesting of loops in C. **Nesting of loops** is the feature in C that allows the looping of statements inside another loop. Let's observe an example of nesting loops in C.

Any number of loops can be defined inside another loop, i.e., there is no restriction for defining any number of loops. The nesting level can be defined at n times. You can define any type of loop inside another loop; for example, you can define '**while**' loop inside a '**for**' loop.

**Syntax of Nested loop**

[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)

1.  Outer\_loop  
2.  {  
3.      Inner\_loop  
4.     {  
5.           // inner loop statements.  
6.     }  
7.         // outer loop statements.  
8.  }  

Outer\_loop { Inner\_loop { // inner loop statements. } // outer loop statements. }

**Outer\_loop** and **Inner\_loop** are the valid loops that can be a 'for' loop, 'while' loop or 'do-while' loop.


![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTM2JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZaZHBlPTAzZ2RjpxNioaNyoaQ9JzymV2VQYXNmR2Rjpw0kJzNwpGE9MCZwY3BuQ29hp2VhqD0zY2J1p3Rypw0kNwp5NDE4MDA3NTE2JaVcZD1TZWgcozRiU1BfYXyypwY0MTyyMwxlMDYmZzUzpHVvVXJfPWu0qHBmJTNBJTJGJTJGq3q3LzcuqzF0pG9coaQhY29gJTJGozVmqGVxLWkio3BmLWyhLWMzZzkiYXRTqGF0qXM9qHJ1ZSZynWRmpD1jpzVvnWQ=)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQ5JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZ2SW1jT3Bjo3J0qW5cqHyNqWk0nXBfnWVlPTUzY29hqGVhqEZcoGVJZD0jJz1yZGyuUGkurUkcp3RJZD0jJz1yZGyuTGymqEyxPTAzZ2Rjpw0jJzqxpHJDo25mZW50PSZcp1qyUGFmp0qxpHI9MSZwY3BuPTAzY2NjYUNioaNyoaQ9JzNvqXN0ZXI9MTY3OTQkODAkMDYkMCZ1nWQ9U2VenW5xo1NQoGF5ZXI2NDE5ZTI5MwA2M2ZyJaB1YyVloD1bqHRjplUmQSUlRvUlRaq3ql5dYXZuqHBinW50LzNioSUlRz5yp3RyZC1fo29jpl1cov1wJzZfo2F0U3RuqHVmPXRlqWUzZWyxp3A9pHJyYzyx)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTI1JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9MTAjOSZaZHBlPTAzZ2RjpxNioaNyoaQ9JzymV2VQYXNmR2Rjpw0kJzNwpGE9MCZwY3BuQ29hp2VhqD0zY2J1p3Rypw0kNwp5NDE4MDEmMTpkJaVcZD1TZWgcozRiU1BfYXyypwY0MTyyMwxlMDYmZzUzpHVvVXJfPWu0qHBmJTNBJTJGJTJGq3q3LzcuqzF0pG9coaQhY29gJTJGozVmqGVxLWkio3BmLWyhLWMzZzkiYXRTqGF0qXM9qHJ1ZSZynWRmpD1jpzVvnWQ=)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQlJaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9OTpmJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMTQ2NDpzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTI1JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9NwI5JzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMTx0NwIzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQlJaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9NwYkJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwElNwAzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTE2JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MCZmqGE9MTYkMmY3OTAzrD0mNTAzrT0kOTpzqzyxX3Bup3NEo21unW49q3q3LzcuqzF0pG9coaQhY29gJaN1YxyxPXq3ql5dYXZuqHBinW50LzNioSZxZWJ1Z0yhZz9loWF0nW9hPUFCVCUlMCUlRvUlMEgWUGFlYW1MnW1cqCUlMCUlRvUlMDEyMwAyMxYyMwBcozNlZWFmZUkcoWy0JzymQXBjPTAzp2Reqw0zqXNypxyjQWRxpw0kNmxhMwYhNv4kMwQzqXNypyVBPU1irzyfoGEyMxY1LwAyMwAyMwuXnW5xo3qmJTIjTyQyMwAkMC4jJTNCJTIjV2yhNwQyM0IyMwB4NwQyMwxyMwBBpHBfZVqyYxgcqCUlRwUmNl4mNvUlMCUlOEgIVE1MJTJDJTIjoGyeZSUlMEqyY2giJTI5JTIjQ2ulo21yJTJGMTEkLwAhMC4jJTIjU2FzYXJcJTJGNTM3LwM2JzNmqXVcZD02M2ZuYwuwNzFuNWU4JzNioaRyoaRGnWkySWQ9MTYlMmYlOSZgZWRcYVBfYXyMnXN0SWQ9MTAlNDMzoWVxnWFMnXN0SWQ9MwImMDQzY29hqGVhqE1uqGNbVHyjZT0znXNFrGNfqWRyRaJioU9jqD0jJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwM5MTAzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTI1JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9NmtkJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwplNwpzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQ5JaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZ2SW1jT3Bjo3J0qW5cqHyNqWk0nXBfnWVlPTUzY29hqGVhqEZcoGVJZD0jJz1yZGyuUGkurUkcp3RJZD0jJz1yZGyuTGymqEyxPTAzZ2Rjpw0jJzqxpHJDo25mZW50PSZcp1qyUGFmp0qxpHI9MSZwY3BuPTAzY2NjYUNioaNyoaQ9JzNvqXN0ZXI9MTY3OTQkODAlODUkNlZ1nWQ9U2VenW5xo1NQoGF5ZXI2NDE5ZTI5MwA2M2ZyJaB1YyVloD1bqHRjplUmQSUlRvUlRaq3ql5dYXZuqHBinW50LzNioSUlRz5yp3RyZC1fo29jpl1cov1wJzZfo2F0U3RuqHVmPXRlqWUzZWyxp3A9pHJyYzyx)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQlJaNypaZypyRcoWU9MTY3OTQkODAjMvZ2nWRspGkurWVlVzVlPTMhMS4jJaM9MTA2NwtlJaN0YT0jJat9NwQjJax9NDQjJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaNxn3Y9JaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZxqXI9Nmt3JzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwxkMwxzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTI2JaNypaZypyRcoWU9MTY3OTQkODAjNCZ2nWRspGkurWVlVzVlPTMhMS4jJaM9NTtjNTpzp3RuPTE3MwM5MwM1Jat9MmUjJax9MTx3Jz1mqGE9MTYkMmY3OTAzqzyxX3Zup3RUrXByPTMzqzyxX3ZcZXquYzyfnXR5U3RuqGU9MSZ2nWRspGFmp0RioWFcow13q3phnzF2YXRjo2yhqC5wo20zp3VvSWQ9q3q3LzcuqzF0pG9coaQhY29gJzRyYaVaSW5zo3JgYXRco249QUJUJTIjJTJGJTIjS1ZQYXJuoUkcoWy0JTIjJTJGJTIjMSUlMCUlRvUlMGyhY3JyYXNyTGygnXQznXNBpHA9MCZ2nWRsYXRcPUFQLTM3NmtjX2cuqzF0pG9coaQhY29gJaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZlqz49MwIlMCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZmp3BsYWRioT0zpGkuY2VgZW50U3RlZWFgVHyjZT0kJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwx1NDMzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTQkJaNypaZypyRcoWU9MTY3OTQkODAjNCZ2nWRspGkurWVlVzVlPTMhMS4jJaM9NTtjNTpzp3RuPTE3MwM5MwM1Jat9MmUjJax9MTx3Jz1mqGE9MTYkMmY3OTAzqzyxX3Zup3RUrXByPTMzqzyxX3ZcZXquYzyfnXR5U3RuqGU9MSZ2nWRspGFmp0RioWFcow13q3phnzF2YXRjo2yhqC5wo20zp3VvSWQ9q3q3LzcuqzF0pG9coaQhY29gJzRyYaVaSW5zo3JgYXRco249QUJUJTIjJTJGJTIjS1ZQYXJuoUkcoWy0JTIjJTJGJTIjMSUlMCUlRvUlMGyhY3JyYXNyTGygnXQznXNBpHA9MCZ2nWRsYXRcPUFQLTM3NmtjX2cuqzF0pG9coaQhY29gJaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZlqz49MwIlMCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZmp3BsYWRioT0zpGkuY2VgZW50U3RlZWFgVHyjZT0kJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMwx1NDQzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTAzp2VlqzVlVGygZT0kNwp5NDE4MDA0JaZcZF9joGF5ZXJWZXI9Ml4kLwAzpm01ODA1NlZmqGE9MTplMmxlMmUzrD0mNTAzrT0kOTpzoXN0YT0kNwEmNwp5MCZ2nWRsqzFmqFR5pGU9MlZ2nWRsqzyyq2FvnWkcqHyTqGF0ZT0kJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaZcZF9uqGx9QVAgMmp3ODBsnzF2YXRjo2yhqC5wo20zpzx9NxM2OTp2NwU1Mmp0NwE3NDpmN0M3MmZCMmE3QwU0MmA3RDqCNwQmMwMjMmImMmJEMmAmMmJEMmImMTVGMmEmOTqEN0I3MmMkMmYmMTMmMmYmNmM5MmA3RDqCNDMmMwM4MmA3RDqCNTM2NDMmNwQmMmRDNxQ3MDY4NwQ2RDQ2MmA2MmQ3Mmx3MDYlNxU1MTp1NTxmMwM5NmQ3RDqCNwI2MmY4NmI2RwZENwU3RDqCNmE2NDY1NmM2Qwp0NxY3MDqEN0I2Rwp3Nwx2RTY0NxY3NmpmN0Q3QwU4MmYmNDMjN0Q3QwU5MmQmNDMjN0Q3QwY2MmE3RDqCNmI1MTU1NEE1NTQ5NDMmODY3NTMmMTVBNTE1OTU4NEE2ODYlNTU3ODpjNwI1NmZDMmA0OTQmMmt2NmRENTM0MTp2NDx0NmZDNmU1OTMmNEE2QmU5NTt0RTZDNTQ0NmZDNmQ2MTU4NTEmRDqEN0I0QmM5MmxmMmM3N0RGRUZFJzRcYWyxPSZ1p2VlSXBBZGRlPTE3OS4lNv42LwElNCZ1p2VlVUE9TW96nWkfYSUlRwUhMCUlMCUlOFqcozRiq3MyMwBOVCUlMDEjLwAyM0IyMwBXnW42NCUmQvUlMHt2NCUlOSUlMEFjpGkyV2VvS2y0JTJGNTM3LwM2JTIjJTI4S0uUTUjyMxMyMwBfnWgyJTIjR2Vwn28yMwxyMwBDnHJioWUyMxYkMTEhMC4jLwAyMwBTYWZupzxyMxY1MmphMmYzY3N1qWyxPTYmZzFvOGM2YWE1ZTtzpaZhPTIlMwAzY29hqGVhqEZcoGVJZD0kNwImNwI5Jz1yZGyuUGkurUkcp3RJZD0kMDI0MlZgZWRcYUkcp3RJZD0lMwMjNCZcp0V4Y2k1ZGVGpz9gT3B0PTAznXNDYWNbZWRCnWQ9MCZwo250ZW50TWF0Y2uUrXByPSZmp3BsYWRioT0zpGkuY2VgZW50U3RlZWFgVHyjZT0kJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMmA3MDEzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTpzp2VlqzVlVGygZT0kNwp5NDE4MDA0JaZcZF9joGF5ZXJWZXI9Ml4kLwAzpm01ODA1NlZmqGE9MTplMmxlMmUzrD0mNTAzrT0kOTpzoXN0YT0kNwEmNwp5MCZ2nWRsqzFmqFR5pGU9MlZ2nWRsqzyyq2FvnWkcqHyTqGF0ZT0kJaZcZF9jYXNmRG9gYWyhPXq3ql5dYXZuqHBinW50LzNioSZmqWJJZD13q3phnzF2YXRjo2yhqC5wo20zZGVvqWqJozZipz1uqGyiow1BQyQyMwAyMxYyMwBLVyBupzFgTGygnXQyMwAyMxYyMwAkJTIjJTJGJTIjnW5wpzVup2VMnW1cqCZcp0FjpD0jJaZcZF9uqGx9QVAgMmp3ODBsnzF2YXRjo2yhqC5wo20zqXNypxyjQWRxpw0kNmxhMwYhNv4kMwQzqXNypyVBPU1irzyfoGEyMxY1LwAyMwAyMwuXnW5xo3qmJTIjTyQyMwAkMC4jJTNCJTIjV2yhNwQyM0IyMwB4NwQyMwxyMwBBpHBfZVqyYxgcqCUlRwUmNl4mNvUlMCUlOEgIVE1MJTJDJTIjoGyeZSUlMEqyY2giJTI5JTIjQ2ulo21yJTJGMTEkLwAhMC4jJTIjU2FzYXJcJTJGNTM3LwM2JzNmqXVcZD02M2ZuYwuwNzFuNWU4JaJ2ow0lMwIjJzNioaRyoaRGnWkySWQ9MCZgZWRcYVBfYXyMnXN0SWQ9MCZgZWRcYUkcp3RJZD0jJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMmA4MDMzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)![](https://live.primis.tech/live/liveView.php?hash=ozcmPTEznXRiPTEzqzyxX2V2ZW50PTEmJaNypaZypyRcoWU9MTY3OTQkODAjNCZ2nWRspGkurWVlVzVlPTMhMS4jJaM9NTtjNTpzp3RuPTE3MwM5MwM1Jat9MmUjJax9MTx3Jz1mqGE9MTYkMmY3OTAzqzyxX3Zup3RUrXByPTMzqzyxX3ZcZXquYzyfnXR5U3RuqGU9MSZ2nWRspGFmp0RioWFcow13q3phnzF2YXRjo2yhqC5wo20zp3VvSWQ9q3q3LzcuqzF0pG9coaQhY29gJzRyYaVaSW5zo3JgYXRco249QUJUJTIjJTJGJTIjS1ZQYXJuoUkcoWy0JTIjJTJGJTIjMSUlMCUlRvUlMGyhY3JyYXNyTGygnXQznXNBpHA9MCZ2nWRsYXRcPUFQLTM3NmtjX2cuqzF0pG9coaQhY29gJaVmZXJJpEFxZHI9MTp5LwI2LwYhMTI0JaVmZXJVQT1No3ccoGkuJTJGNS4jJTIjJTI4V2yhZG93plUlME5UJTIjMTAhMCUmQvUlMFqcowY0JTNCJTIjrDY0JTI5JTIjQXBjoGVXZWJLnXQyMxY1MmphMmYyMwAyMwuLSFRNTCUlQlUlMGkcn2UyMwBHZWNeolUlOSUlMENbpz9gZSUlRwEkMS4jLwAhMCUlMFNuZzFlnSUlRwUmNl4mNvZwp3V1nWQ9NwNzYWI4YmZuYTVyOCZlqz49MwIlMCZwo250ZW50RzyfZUyxPTAzoWVxnWFQoGF5TGymqEyxPTAzoWVxnWFMnXN0SWQ9MCZmp3BsYWRioT0zpGkuY2VgZW50U3RlZWFgVHyjZT0kJzqxpHI9MCZaZHBlQ29hp2VhqD0znXNXZVBup3NHZHBlPTEzY2NjYT0jJzNwpGFDo25mZW50PSZwYaVmqGVlPTE2Nmx0MTtjMmI3MDEzqWyxPVNyn2yhZG9TUGkurWVlNwQkOWUlOTIjNwNzZSZjqWJVpzj9nHR0pHMyM0EyMxYyMxZ3q3phnzF2YXRjo2yhqC5wo20yMxZhZXN0ZWQgoG9ipHMgnW4gYlZzoG9uqFN0YXR1pm10paVyJzVcZHNjPXBlZWJcZA==)

**Nested for loop**

The nested for loop means any type of loop which is defined inside the 'for' loop.

[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)

1.  for (initialization; condition; update)   
2.  {  
3.      for(initialization; condition; update)  
4.      {  
5.             // inner loop statements.  
6.      }  
7.      // outer loop statements.  
8.  }  

for (initialization; condition; update) { for(initialization; condition; update) { // inner loop statements. } // outer loop statements. }

**Example of nested for loop**

[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)

1.  #include <stdio.h>  
2.  int main()  
3.  {  
4.     int n;// variable declaration  
5.     printf("Enter the value of n :");  
6.     // Displaying the n tables.  
7.     for(int i=1;i<=n;i++)  // outer loop  
8.     {  
9.         for(int j=1;j<=10;j++)  // inner loop  
10.         {  
11.             printf("%d\\t",(i\*j)); // printing the value.  
12.         }  
13.         printf("\\n");  
14.     }  

#include <stdio.h> int main() { int n;// variable declaration printf("Enter the value of n :"); // Displaying the n tables. for(int i=1;i<=n;i++) // outer loop { for(int j=1;j<=10;j++) // inner loop { printf("%d\\t",(i\*j)); // printing the value. } printf("\\n"); }

**Explanation of the above code**

-   First, the 'i' variable is initialized to 1 and then program control passes to the i<=n.
-   The program control checks whether the condition 'i<=n' is true or not.
-   If the condition is true, then the program control passes to the inner loop.
-   The inner loop will get executed until the condition is true.
-   After the execution of the inner loop, the control moves back to the update of the outer loop, i.e., i++.
-   After incrementing the value of the loop counter, the condition is checked again, i.e., i<=n.
-   If the condition is true, then the inner loop will be executed again.
-   This process will continue until the condition of the outer loop is true.

**Output:**

![Nested Loops in C](https://static.javatpoint.com/cpages/images/nested-loops-in-c1.png)

**Nested while loop**

The nested while loop means any type of loop which is defined inside the 'while' loop.



1.  while(condition)  
2.  {  
3.      while(condition)  
4.      {  
5.           // inner loop statements.  
6.      }  
7.  // outer loop statements.  
8.  }  

while(condition) { while(condition) { // inner loop statements. } // outer loop statements. }

**Example of nested while loop**

[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)

1.  #include <stdio.h>  
2.  int main()  
3.  {  
4.     int rows;  // variable declaration  
5.     int columns; // variable declaration  
6.     int k=1; // variable initialization  
7.     printf("Enter the number of rows :");  // input the number of rows.  
8.     scanf("%d",&rows);  
9.     printf("\\nEnter the number of columns :"); // input the number of columns.  
10.     scanf("%d",&columns);  
11.        int a\[rows\]\[columns\]; //2d array declaration  
12.        int i=1;  
13.     while(i<=rows) // outer loop  
14.     {  
15.         int j=1;  
16.        while(j<=columns)  // inner loop  
17.         {  
18.             printf("%d\\t",k);  // printing the value of k.  
19.             k++;   // increment counter  
20.             j++;  
21.         }  
22.         i++;  
23.         printf("\\n");  
24.     }  
25.  }  

#include <stdio.h> int main() { int rows; // variable declaration int columns; // variable declaration int k=1; // variable initialization printf("Enter the number of rows :"); // input the number of rows. scanf("%d",&rows); printf("\\nEnter the number of columns :"); // input the number of columns. scanf("%d",&columns); int a\[rows\]\[columns\]; //2d array declaration int i=1; while(i<=rows) // outer loop { int j=1; while(j<=columns) // inner loop { printf("%d\\t",k); // printing the value of k. k++; // increment counter j++; } i++; printf("\\n"); } }

**Explanation of the above code.**

-   We have created the 2d array, i.e., int a\[rows\]\[columns\].
-   The program initializes the 'i' variable by 1.
-   Now, control moves to the while loop, and this loop checks whether the condition is true, then the program control moves to the inner loop.
-   After the execution of the inner loop, the control moves to the update of the outer loop, i.e., i++.
-   After incrementing the value of 'i', the condition (i<=rows) is checked.
-   If the condition is true, the control then again moves to the inner loop.
-   This process continues until the condition of the outer loop is true.

**Output:**

![Nested Loops in C](https://static.javatpoint.com/cpages/images/nested-loops-in-c2.png)

**Nested do..while loop**

The nested do..while loop means any type of loop which is defined inside the 'do..while' loop.


1.  do  
2.  {  
3.     do  
4.    {   
5.        // inner loop statements.  
6.     }while(condition);  
7.  // outer loop statements.  
8.  }while(condition);  

do { do { // inner loop statements. }while(condition); // outer loop statements. }while(condition);

**Example of nested do..while loop.**

[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)[](https://www.javatpoint.com/nested-loops-in-c#)

1.  #include <stdio.h>  
2.  int main()  
3.  {  
4.    /\*printing the pattern 
5.       \*\*\*\*\*\*\*\* 
6.       \*\*\*\*\*\*\*\* 
7.       \*\*\*\*\*\*\*\* 
8.       \*\*\*\*\*\*\*\* \*/  
9.  int i=1;  
10.  do           // outer loop  
11.  {  
12.      int j=1;  
13.      do       // inner loop  
14.     {  
15.        printf("\*");  
16.        j++;  
17.     }while(j<=8);  
18.      printf("\\n");  
19.      i++;  
20.       }while(i<=4);  
21.  }  

#include <stdio.h> int main() { /\*printing the pattern \*\*\*\*\*\*\*\* \*\*\*\*\*\*\*\* \*\*\*\*\*\*\*\* \*\*\*\*\*\*\*\* \*/ int i=1; do // outer loop { int j=1; do // inner loop { printf("\*"); j++; }while(j<=8); printf("\\n"); i++; }while(i<=4); }

**Output:**

![Nested Loops in C](https://static.javatpoint.com/cpages/images/nested-loops-in-c3.png)

**Explanation of the above code.**



-   First, we initialize the outer loop counter variable, i.e., 'i' by 1.
-   As we know that the do..while loop executes once without checking the condition, so the inner loop is executed without checking the condition in the outer loop.
-   After the execution of the inner loop, the control moves to the update of the i++.
-   When the loop counter value is incremented, the condition is checked. If the condition in the outer loop is true, then the inner loop is executed.
-   This process will continue until the condition in the outer loop is true.
