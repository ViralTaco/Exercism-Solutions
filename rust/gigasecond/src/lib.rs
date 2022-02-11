type UtcDateTime = chrono::DateTime<chrono::Utc>;
// Returns a Utc DateTime one billion seconds after start.
pub fn after(start: UtcDateTime) -> UtcDateTime {
    start + chrono::Duration::seconds(1e9 as i64)
}
