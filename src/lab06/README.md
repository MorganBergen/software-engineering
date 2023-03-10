# uml class modeling

**contents**

1.  [objective](#objective)
2.  [deliverable](#deliverable)
3.  [problem description](#problem-description)

## objective

## deliverable

draw a class diagram for the above entities (classes) and label all the associations with appropriate multiplicities

## problem description

assume the domain of digital music players.  draw a uml class diagram representing the entities and their relationship in that domain.  for now, a very minimal list of attributes for the entities (classes) will suffice.  

-  an artist is either a band or a musician.  
-  a band consists of two or more musicians

-  each song has a title, an artist who performed it, and an artist who wrote it.
-  for this domain a song means a recording of a piece of music, so if a piece of music is recorded more than once (say, by different artists), we treat them as different songs
-  each song is performed by exactly one artist and written by exactly one artist

-  an album is composed of several tracks
-  each of which contains exactly one song
-  a song can be used in any number of tracks because it could appear on more than one album or even more than once on the same album

-  a track has a bitrate and a duration
-  because the order of the tracks on an album is important the system will need to know for any given track what the next track is
-  the system will need to know what the previous track is (if there is one)

Problem description
Assume the domain of digital music players. Draw a UML Class diagram representing the entities and their relationship in that domain. For now, a very minimal list of attributes for the entities (classes) will suffice.
An artist is either a band or a musician. A band consists of two or more musicians.
Each song has a title, an artist who performed it, and an artist who wrote it. For this domain, a "song" means a recording of a piece of music, so if a piece of music is recorded more than once (say, by different artists), we treat them as different songs. Each song is performed by exactly one artist and written by exactly one artist.
An album is composed of several tracks, each of which contains exactly one song. A song can be used in any number of tracks because it could appear on more than one album or even more than once on the same album. A track has a bitrate and a duration. Because the order of the tracks on an album is important, the system will need to know, for any given track, what the next track is, and what the previous track is (if there is one).
Draw a class diagram for the above entities, and label all the associations with appropriate multiplicities.
