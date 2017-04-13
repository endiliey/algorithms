SELECT name
FROM world
WHERE population > (SELECT population FROM world WHERE name = 'Russia')

SELECT name
FROM world
WHERE continent = 'Europe' 
AND GDP/population > (SELECT GDP/population FROM world WHERE name = 'United Kingdom')

SELECT name,continent
FROM world
WHERE continent in (SELECT continent FROM world WHERE name IN ('Argentina', 'Australia'))
ORDER BY name

SELECT name, population
FROM world
WHERE population > (SELECT population FROM world WHERE name = 'Canada') AND population < (SELECT population FROM world WHERE name = 'Poland')  

SELECT 
  name, 
  CONCAT(ROUND((population*100)/(SELECT population 
                                 FROM world WHERE name='Germany')), '%')
FROM world
WHERE continent = 'Europe'

SELECT name
FROM world
WHERE GDP > (SELECT MAX(GDP) FROM world WHERE GDP > 0 AND continent = 'Europe')

SELECT continent, name, area
FROM world x
WHERE area >= ALL
(SELECT area FROM world y
WHERE y.continent=x.continent
AND area > 0)

SELECT continent,name 
FROM world x
WHERE x.name <= ALL 
(SELECT name FROM world y
WHERE x.continent=y.continent)

SELECT name, continent, population
FROM world a
WHERE 25000000 >= ALL(SELECT population FROM world b WHERE a.continent = b.continent)

SELECT name, continent
FROM world a
WHERE population > ALL(SELECT 3 * population FROM world b WHERE a.continent = b.continent AND a.name != b.name)
