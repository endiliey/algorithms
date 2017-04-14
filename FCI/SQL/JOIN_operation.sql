SELECT matchid, player
FROM goal
WHERE teamid = 'GER'

SELECT DISTINCT id, stadium, team1, team2
FROM goal
INNER JOIN game
ON game.id = goal.matchid
WHERE matchid = '1012' and teamid = 'GER'

SELECT player, teamid, stadium, mdate
FROM game join goal ON (game.id = goal.matchid)
WHERE teamid = 'GER'

SELECT team1, team2, player
FROM game JOIN goal ON (game.id = goal.matchid)
WHERE player LIKE 'Mario%'

SELECT player, teamid, coach, gtime
FROM goal JOIN eteam ON teamid = id
WHERE gtime <= 10

SELECT mdate,teamname
FROM game JOIN eteam ON (team1=eteam.id)
WHERE coach='Fernando Santos'

SELECT player
FROM goal JOIN game
ON goal.matchid = game.id
WHERE stadium = 'National Stadium, Warsaw'

SELECT distinct player
FROM game JOIN goal ON matchid = id 
WHERE (team2 = 'GER' OR team1 = 'GER') AND teamid != 'GER'

SELECT teamname, COUNT(*)
FROM goal join eteam ON goal.teamid = eteam.id
GROUP BY teamname

SELECT stadium, COUNT(*)
FROM goal JOIN game ON goal.matchid = game.id
GROUP BY stadium

SELECT matchid, mdate, COUNT(*)
FROM game JOIN goal ON matchid = id 
WHERE (team1 = 'POL' OR team2 = 'POL')
GROUP BY matchid, mdate

SELECT matchid, mdate, COUNT(*)
FROM game JOIN goal on game.id = goal.matchid
WHERE teamid = 'GER'
GROUP BY matchid, mdate

SELECT mdate,
  team1,
  SUM(CASE WHEN teamid=team1 THEN 1 ELSE 0 END) score1,
  team2,
  SUM(CASE WHEN teamid=team2 THEN 1 ELSE 0 END) score2
FROM game LEFT JOIN goal ON goal.matchid = game.id
GROUP BY mdate,matchid,team1,team2


