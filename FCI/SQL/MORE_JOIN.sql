SELECT id, title
FROM movie
WHERE yr = 1962

SELECT yr
FROM movie
WHERE title = 'Citizen Kane'

SELECT id, title, yr
FROM movie
WHERE title LIKE '%Star Trek%'
ORDER BY yr

SELECT id
FROM actor
WHERE name = 'Glenn Close'

SELECT id
FROM movie
WHERE title = 'Casablanca'

SELECT distinct name
FROM actor 
INNER JOIN casting ON actor.id = casting.actorid
INNER JOIN movie ON casting.movieid = movie.id
WHERE movieid = 11768

SELECT distinct name
FROM actor
INNER JOIN casting ON actor.id = casting.actorid
INNER JOIN movie ON casting.movieid = movie.id
WHERE title = 'Alien'

SELECT distinct title
FROM actor
INNER JOIN casting ON actor.id = casting.actorid
INNER JOIN movie ON casting.movieid = movie.id
WHERE name = 'Harrison Ford'

SELECT distinct title
FROM actor
INNER JOIN casting ON actor.id = casting.actorid
INNER JOIN movie ON casting.movieid = movie.id
WHERE name = 'Harrison Ford' AND ord != 1

SELECT title, name
FROM actor
INNER JOIN casting ON actor.id = casting.actorid
INNER JOIN movie ON casting.movieid = movie.id
WHERE yr = 1962 AND ord = 1

SELECT yr, MAX(total)
FROM (SELECT yr, COUNT(title) as total
FROM movie 
JOIN casting ON movie.id=movieid
JOIN actor   ON actorid=actor.id
WHERE name = 'John Travolta'
GROUP BY yr 
HAVING COUNT(title) > 2) T
GROUP BY yr

SELECT title, name
  FROM movie, casting, actor
  WHERE movieid=movie.id
    AND actorid=actor.id
    AND ord=1
    AND movieid IN
    (SELECT movieid FROM casting, actor
     WHERE actorid=actor.id
     AND name='Julie Andrews')

SELECT name
    FROM casting JOIN actor
      ON  actorid = actor.id
    WHERE ord=1
    GROUP BY name
    HAVING COUNT(movieid)>=30

SELECT title, COUNT(actorid)
FROM casting,movie                
WHERE yr=1978
AND movieid=movie.id
GROUP BY title
ORDER BY 2 DESC,1 ASC

SELECT DISTINCT d.name
FROM actor d JOIN casting a ON (a.actorid=d.id)
   JOIN casting b on (a.movieid=b.movieid)
   JOIN actor c on (b.actorid=c.id 
                and c.name='Art Garfunkel')
  WHERE d.id!=c.id



