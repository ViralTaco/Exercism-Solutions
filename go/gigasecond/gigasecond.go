package gigasecond
import . "time"

// AddGigasecond has a comment documenting it.
func AddGigasecond(start Time) Time {
	return start.Add(1e9 * Second)
}
