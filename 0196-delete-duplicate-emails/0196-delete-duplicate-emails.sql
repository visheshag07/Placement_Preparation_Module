WITH min_id_table AS (
    SELECT min(id) as id
    FROM person
    GROUP BY email
)

DELETE FROM person
WHERE id NOT IN (
    SELECT id
    FROM min_id_table
)